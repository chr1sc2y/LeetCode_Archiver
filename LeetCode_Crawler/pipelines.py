# -*- coding: utf-8 -*-

# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://doc.scrapy.org/en/latest/topics/item-pipeline.html

import pymongo
from LeetCode_Crawler.settings import mongo_collection, mongo_db, mongo_host, mongo_port


class QuestionDataPipeline(object):

    def open_spider(self, spider):
        mongo_client = pymongo.MongoClient(mongo_host, mongo_port)
        self.mongo_db = mongo_client[mongo_db]
        self.mongo_collection = self.mongo_db[mongo_collection]
        self.question_set = set()
        questions = self.mongo_collection.find()
        for question in questions:
            self.question_set.add(question["id"])

        file = open('./README.md', 'w')
        file.write('| # | title | difficulty | topics | accepted | submission | accepted rate | likes | dislikes |\n')
        file.write(
            '| :------: | :------: | :------: | :------: | :------: | :------: | :------: | :------: | :------: |\n')

    def process_item(self, item, spider):
        data = dict(item)
        data["id"] = int(data["id"])
        if data["id"] not in self.question_set:
            self.mongo_collection.insert(data)

    def close_spider(self, spider):
        questions = self.mongo_collection.find().sort("id")
        file = open('./README.md', 'a')
        for question in questions:
            topics = ""
            for topic in question["topics"]:
                topics += topic + ", "
            topics = topics[:-2]

            file.writelines(
                ['| ', str(question["id"]), ' | ', str(question["title"]), ' | ', str(question["difficulty"]), ' | ',
                 str(topics), ' | ', str(question["accepted"]), ' | ', str(question["submission"]), ' | ',
                 str(question["ACrate"]), ' | ', str(question["likes"]), ' | ', str(question["dislikes"]), '\n'])
        file.close()