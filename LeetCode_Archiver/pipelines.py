# -*- coding: utf-8 -*-

# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://doc.scrapy.org/en/latest/topics/item-pipeline.html

import time
from LeetCode_Archiver.LocalFile import LocalFile
from LeetCode_Archiver.Statistic import Statistic


class QuestionDataPipeline(object):

    def open_spider(self, spider):
        self.data_set = []
        self.language_set = set()
        # self.start = time.time()

    def process_item(self, item, spider):
        data = dict(item)
        data["id"] = int(data["id"])
        if len(data["submission_list"]) == 0:
            return
        self.data_set.append(data)
        for language in data["submission_list"].keys():
            if language not in self.language_set:
                self.language_set.add(language)

    def close_spider(self, spider):
        print("Generating local files")
        LocalFile(self.data_set, self.language_set)
        print("Generating statistical figures")
        Statistic(self.data_set)
        print("Done!")
        # self.end = time.time()
        # print("Total time: " + str((self.end - self.start) // 1000) + "s")