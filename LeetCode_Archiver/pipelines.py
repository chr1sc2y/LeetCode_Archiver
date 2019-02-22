# -*- coding: utf-8 -*-

# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://doc.scrapy.org/en/latest/topics/item-pipeline.html

from LeetCode_Archiver.LocalFile import LocalFile
from LeetCode_Archiver.Statistic import Statistic


class QuestionDataPipeline(object):

    def open_spider(self, spider):
        self.data_set = []
        self.language_set = set()

    def process_item(self, item, spider):
        data = dict(item)
        data["id"] = int(data["id"])
        self.data_set.append(data)
        for language in data["submission_list"].keys():
            if language not in self.language_set:
                self.language_set.add(language)

    def close_spider(self, spider):
        LocalFile(self.data_set, self.language_set).GenerateFiles()
        statistic = Statistic(self.data_set, self.language_se)
        statistic.TopicRatio()