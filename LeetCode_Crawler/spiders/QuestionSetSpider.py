# -*- coding: utf-8 -*-
import json
import scrapy
from LeetCode_Crawler.items import QuestionDataItem


class QuestionSetSpider(scrapy.Spider):
    custom_settings = {
        'ITEM_PIPELINES': {
            'LeetCode_Crawler.pipelines.QuestionDataPipeline': 1
        }
    }

    name = 'QuestionSetSpider'
    allowed_domains = ['leetcode.com']
    urls = ["https://leetcode.com/api/problems/all/", "https://leetcode.com/graphql"]
    headers = {
        "content-type": "application/json",
        "user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'",
    }
    payload = "{\n    \"operationName\": \"questionData\",\n    \"variables\": {\n        \"titleSlug\": \"QuestionName\"\n    },\n    \"query\": \"query questionData($titleSlug: String!) {\\n  question(titleSlug: $titleSlug) {\\n    questionId\\n    questionFrontendId\\n    boundTopicId\\n    title\\n    titleSlug\\n    content\\n    translatedTitle\\n    translatedContent\\n    isPaidOnly\\n    difficulty\\n    likes\\n    dislikes\\n    isLiked\\n    similarQuestions\\n    contributors {\\n      username\\n      profileUrl\\n      avatarUrl\\n      __typename\\n    }\\n    langToValidPlayground\\n    topicTags {\\n      name\\n      slug\\n      translatedName\\n      __typename\\n    }\\n    companyTagStats\\n    codeSnippets {\\n      lang\\n      langSlug\\n      code\\n      __typename\\n    }\\n    stats\\n    hints\\n    solution {\\n      id\\n      canSeeDetail\\n      __typename\\n    }\\n    status\\n    sampleTestCase\\n    metaData\\n    judgerAvailable\\n    judgeType\\n    mysqlSchemas\\n    enableRunCode\\n    enableTestMode\\n    envInfo\\n    __typename\\n  }\\n}\\n\"\n}\n"

    def start_requests(self):
        yield scrapy.Request(url=self.urls[0], callback=self.ParseQuestionSet)
        # yield scrapy.Request(url=self.urls[0], callback=self.Test)

    def ParseQuestionSet(self, response):
        questionSet = json.loads(response.text)
        questionSet = questionSet["stat_status_pairs"]
        for question in questionSet:
            titleSlug = question["stat"]["question__title_slug"]
            self.payload = self.payload.replace("QuestionName", titleSlug)
            yield scrapy.FormRequest(url=self.urls[1], callback=self.ParseQuestionData,
                                     headers=self.headers, body=self.payload)
            self.payload = self.payload.replace(titleSlug, "QuestionName")

    def ParseQuestionData(self, response):
        questionData = json.loads(response.text)["data"]["question"]
        questionDataItem = QuestionDataItem()
        questionDataItem["id"] = questionData["questionFrontendId"]
        questionDataItem["title"] = questionData["title"]
        questionDataItem["content"] = questionData["content"]
        topics = []
        for topic in questionData["topicTags"]:
            topics.append(topic["name"])
            questionDataItem["topics"] = topics
        questionDataItem["difficulty"] = questionData["difficulty"]
        questionDataItem["likes"] = questionData["likes"]
        questionDataItem["dislikes"] = questionData["dislikes"]
        stats = json.loads(questionData["stats"])
        questionDataItem["accepted"] = stats["totalAcceptedRaw"]
        questionDataItem["submission"] = stats["totalSubmissionRaw"]
        questionDataItem["ACrate"] = stats["acRate"]
        yield questionDataItem

    def Test(self, response):
        pass
