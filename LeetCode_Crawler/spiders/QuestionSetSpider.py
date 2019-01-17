# -*- coding: utf-8 -*-
import json
import scrapy
import requests
from LeetCode_Crawler.items import QuestionDataItem


class QuestionSetSpider(scrapy.Spider):
    custom_settings = {
        'ITEM_PIPELINES': {
            'LeetCode_Crawler.pipelines.QuestionDataPipeline': 1
        }
    }

    name = 'QuestionSetSpider'
    allowed_domains = ['leetcode.com']
    empty_url = "https://leetcode.com/"
    questionset_url = "https://leetcode.com/api/problems/all/"
    graphql_url = "https://leetcode.com/graphql"
    headers = {
        "user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'",
        "content-type": "application/json"  # necessary
    }
    submission_headers = {
        "user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'",
        "referer": "https://leetcode.com/submissions/",  # necessary
        "content-type": "application/x-www-form-urlencoded"  # necessary
    }

    question_payload = "{\n    \"operationName\": \"questionData\",\n    \"variables\": {\n        \"titleSlug\": \"QuestionName\"\n    },\n    \"query\": \"query questionData($titleSlug: String!) {\\n  question(titleSlug: $titleSlug) {\\n    questionId\\n    questionFrontendId\\n    boundTopicId\\n    title\\n    titleSlug\\n    content\\n    translatedTitle\\n    translatedContent\\n    isPaidOnly\\n    difficulty\\n    likes\\n    dislikes\\n    isLiked\\n    similarQuestions\\n    contributors {\\n      username\\n      profileUrl\\n      avatarUrl\\n      __typename\\n    }\\n    langToValidPlayground\\n    topicTags {\\n      name\\n      slug\\n      translatedName\\n      __typename\\n    }\\n    companyTagStats\\n    codeSnippets {\\n      lang\\n      langSlug\\n      code\\n      __typename\\n    }\\n    stats\\n    hints\\n    solution {\\n      id\\n      canSeeDetail\\n      __typename\\n    }\\n    status\\n    sampleTestCase\\n    metaData\\n    judgerAvailable\\n    judgeType\\n    mysqlSchemas\\n    enableRunCode\\n    enableTestMode\\n    envInfo\\n    __typename\\n  }\\n}\\n\"\n}\n"

    def start_requests(self):
        yield scrapy.Request(url=self.questionset_url, callback=self.ParseQuestionSet)
        yield scrapy.Request(url=self.empty_url, callback=self.ParseSubmission)
        # yield scrapy.Request(url=self.login_url, callback=self.Test)

    def ParseQuestionSet(self, response):
        questionSet = json.loads(response.text)
        questionSet = questionSet["stat_status_pairs"]
        # for question in questionSet:
        for question in questionSet[:10]:
            titleSlug = question["stat"]["question__title_slug"]
            self.question_payload = self.question_payload.replace("QuestionName", titleSlug)
            yield scrapy.FormRequest(url=self.graphql_url, callback=self.ParseQuestionData,
                                     headers=self.headers, body=self.question_payload)
            self.question_payload = self.question_payload.replace(titleSlug, "QuestionName")

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
        stats = json.loads(questionData["stats"])
        questionDataItem["ACrate"] = stats["acRate"]
        yield questionDataItem

    def ParseSubmission(self, response):
        login_url = "https://leetcode.com/accounts/login/"
        login_headers = {
            "user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'",
            "referer": "https://leetcode.com/accounts/login/",  # necessary
        }

        session = requests.session()
        session.get(login_url)
        data = {"login": "ZintrulCre", "password": "EXxw=+^d27jm7=of6E",
                "csrfmiddlewaretoken": session.cookies['csrftoken']}
        session.post(login_url, data=data, headers=login_headers)

        submission_url = "https://leetcode.com/api/submissions/"
        submission_headers = {
            "user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'"
        }

        submissionData = session.get(submission_url, headers=submission_headers)
        submissionData = json.loads(submissionData.text)
        file = open('./test.json', 'w')
        file.write(str(submissionData))

    def Test(self, response):
        pass
