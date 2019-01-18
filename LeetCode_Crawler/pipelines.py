# -*- coding: utf-8 -*-

# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://doc.scrapy.org/en/latest/topics/item-pipeline.html

import pymongo
from LeetCode_Crawler.settings import mongo_collection, mongo_db, mongo_host, mongo_port
from LeetCode_Crawler.LocalFile import LocalFile


class QuestionDataPipeline(object):

    def open_spider(self, spider):
        mongo_client = pymongo.MongoClient(mongo_host, mongo_port)
        self.mongo_db = mongo_client[mongo_db]
        self.mongo_collection = self.mongo_db[mongo_collection]
        self.question_set = set()
        questions = self.mongo_collection.find()
        for question in questions:
            self.question_set.add(question["id"])

    def process_item(self, item, spider):
        data = dict(item)
        data["id"] = int(data["id"])
        if data["id"] not in self.question_set:
            self.mongo_collection.insert(data)

    def close_spider(self, spider):
        local_file = LocalFile()

        # generate md file head
        file = open('./README.md', 'w')
        file.write('| # | title | submissions | topics | difficulty | accepted rate | likes | dislikes |\n')
        file.write(
            '| :------: | :------: | :------: | :------: | :------: | :------: | :------: | :------: |\n')

        questions = self.mongo_collection.find().sort("id")
        for question in questions:
            if question["id"]:
                # generate local file, submissions, topics
                local_file.GenerateLocalFile(question["id"], question["submission_list"])
                submissions = local_file.GenerateSubmissions(question["id"], question["submission_list"])
                topics = local_file.GenerateTopics(question["topics"])

                # generate md file
                file.writelines(['| ', str(question["id"]), ' | ', str(question["title"]), ' | ' + submissions + ' | ',
                                 str(topics), ' | ', str(question["difficulty"]), ' | ', str(question["ac_rate"]),
                                 ' | ', str(question["likes"]), ' | ', str(question["dislikes"]), '\n'])
                file.flush()
        file.close()
