# -*- coding: utf-8 -*-

# Define here the models for your scraped items
#
# See documentation in:
# https://doc.scrapy.org/en/latest/topics/items.html

import scrapy


class QuestionDataItem(scrapy.Item):
    # define the fields for your item here like:
    # name = scrapy.Field()
    id = scrapy.Field()
    title = scrapy.Field()
    content = scrapy.Field()
    topics = scrapy.Field()
    difficulty = scrapy.Field()
    accepted = scrapy.Field()
    submission = scrapy.Field()
    ACrate = scrapy.Field()
    likes = scrapy.Field()
    dislikes = scrapy.Field()