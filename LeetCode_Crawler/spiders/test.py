# -*- coding: utf-8 -*-
import scrapy


class TestSpider(scrapy.Spider):
    name = 'test'
    allowed_domains = ['leetcode.com']
    start_urls = ['http://leetcode.com/']

    def parse(self, response):
        pass
