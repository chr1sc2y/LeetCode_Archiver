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
        # connect to mongodb
        mongo_client = pymongo.MongoClient(mongo_host, mongo_port)
        self.mongo_db = mongo_client[mongo_db]
        self.mongo_collection = self.mongo_db[mongo_collection]
        # init set
        self.db_question_set = set()
        self.language_set = set()
        questions = self.mongo_collection.find()
        for question in questions:
            self.db_question_set.add(question["id"])

    def process_item(self, item, spider):
        data = dict(item)
        data["id"] = int(data["id"])
        if data["id"] in self.db_question_set:
            self.mongo_collection.remove({"id":data["id"]})
        self.mongo_collection.insert(data)
        for language in data["submission_list"].keys():
            if language not in self.language_set:
                self.language_set.add(language)

    def close_spider(self, spider):
        local_file = LocalFile()
        local_file.GenerateSolutionFolders(self.language_set)
        local_file.GenerateREADME()