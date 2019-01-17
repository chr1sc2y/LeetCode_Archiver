# -*- coding: utf-8 -*-
import os
import pymongo


class LocalSolutionSpider():
    def __init__(self):
        mongo_host = '127.0.0.1'
        mongo_port = 27017
        mongo_db = 'LeetCodeDB'
        mongo_collection = 'QuestionData'
        mongo_client = pymongo.MongoClient(mongo_host, mongo_port)
        self.mongo_db = mongo_client[mongo_db]
        self.mongo_collection = self.mongo_db[mongo_collection]

    def ParseLocalSolution(self):
        root_folder = "/Users/zhengyuchen/Google-Drive/Sync/Repository/LeetCode/"
        self.ParseCPP(root_folder + "C++/")

    def ParseCPP(self,folder):
        files = os.listdir(folder)
        print(type(files))
        for file in files:
            if file is None:
                continue
            id = int(file[0:file.find('.')])
            questiondata = self.mongo_collection.find({"id": id})[0]
            question_file = open(folder + file, "r")
            for line in question_file:
                print(line)