# -*- coding: utf-8 -*-
import json
import time
import scrapy
import requests
from LeetCode_Archiver.items import QuestionDataItem


class QuestionSetSpider(scrapy.Spider):
    custom_settings = {
        'ITEM_PIPELINES': {
            'LeetCode_Archiver.pipelines.QuestionDataPipeline': 1
        }
    }

    name = 'QuestionSetSpider'
    allowed_domains = ['leetcode.com']
    base_url = "https://leetcode.com/"
    graphql_url = "https://leetcode.com/graphql"

    def Login(self):
        login_url = "https://leetcode.com/accounts/login/"
        login_headers = {
            "user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'",
            "referer": "https://leetcode.com/accounts/login/",
            # "content-type": "multipart/form-data; boundary=----WebKitFormBoundary70YlQBtroATwu9Jx"    # bug
        }
        self.session = requests.session()
        result = self.session.get(login_url)
        file = open('config.json', 'r')
        info = json.load(file)
        data = {"login": info["username"], "password": info["password"],
                "csrfmiddlewaretoken": self.session.cookies['csrftoken']}
        self.session.post(login_url, data=data, headers=login_headers)

    def start_requests(self):
        self.Login()
        questionset_url = "https://leetcode.com/api/problems/all/"
        yield scrapy.Request(url=questionset_url, callback=self.ParseQuestionSet)

    def ParseQuestionSet(self, response):
        question_url = "https://leetcode.com/graphql"
        question_headers = {
            "user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'",
            "content-type": "application/json"  # necessary
        }
        question_payload = "{\n    \"operationName\": \"questionData\",\n    \"variables\": {\n        \"titleSlug\": \"QuestionName\"\n    },\n    \"query\": \"query questionData($titleSlug: String!) {\\n  question(titleSlug: $titleSlug) {\\n    questionId\\n    questionFrontendId\\n    boundTopicId\\n    title\\n    titleSlug\\n    content\\n    translatedTitle\\n    translatedContent\\n    isPaidOnly\\n    difficulty\\n    likes\\n    dislikes\\n    isLiked\\n    similarQuestions\\n    contributors {\\n      username\\n      profileUrl\\n      avatarUrl\\n      __typename\\n    }\\n    langToValidPlayground\\n    topicTags {\\n      name\\n      slug\\n      translatedName\\n      __typename\\n    }\\n    companyTagStats\\n    codeSnippets {\\n      lang\\n      langSlug\\n      code\\n      __typename\\n    }\\n    stats\\n    hints\\n    solution {\\n      id\\n      canSeeDetail\\n      __typename\\n    }\\n    status\\n    sampleTestCase\\n    metaData\\n    judgerAvailable\\n    judgeType\\n    mysqlSchemas\\n    enableRunCode\\n    enableTestMode\\n    envInfo\\n    __typename\\n  }\\n}\\n\"\n}\n"
        questionSet = json.loads(response.text)
        questionSet = questionSet["stat_status_pairs"]
        for question in questionSet:
            title_slug = question["stat"]["question__title_slug"]

            # filter unsolved questions
            # submission_list = self.GetSubmissionList(title_slug)
            # if (len(submission_list) == 0):
            #     continue

            question_payload = question_payload.replace("QuestionName", title_slug)
            yield scrapy.FormRequest(url=question_url, callback=self.ParseQuestionData,
                                     headers=question_headers, body=question_payload)
            question_payload = question_payload.replace(title_slug, "QuestionName")
            print("Downloading " + str(question["stat"]["frontend_question_id"]) + ' ' + question["stat"]["question__title"])
            time.sleep(0.4)

    def ParseQuestionData(self, response):
        questionData = json.loads(response.text)["data"]["question"]
        questionDataItem = QuestionDataItem()
        questionDataItem["id"] = questionData["questionFrontendId"]
        questionDataItem["title"] = questionData["title"]
        questionDataItem["content"] = questionData["content"]
        topics = []
        for topic in questionData["topicTags"]:
            topics.append(topic["name"])
        if len(topics) == 0:
            topics.append("None")
        questionDataItem["topics"] = topics
        questionDataItem["difficulty"] = questionData["difficulty"]
        stats = json.loads(questionData["stats"])
        questionDataItem["ac_rate"] = stats["acRate"]
        questionDataItem["likes"] = questionData["likes"]
        questionDataItem["dislikes"] = questionData["dislikes"]
        questionDataItem["slug"] = questionData["titleSlug"]
        submission_list = self.GetSubmissionList(questionDataItem["slug"])
        questionDataItem["submission_list"] = submission_list

        yield questionDataItem

    # Get latest submissions
    def GetSubmissionList(self, slug):
        referer = "https://leetcode.com/problems/" + slug + "/"
        submission_headers = {
            "user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'",
            "content-type": "application/json",
            "referer": referer
        }
        submission_payload = "{\"operationName\":\"Submissions\",\"variables\":{\"offset\":0,\"limit\":20,\"lastKey\":null,\"questionSlug\":\"QuestionName\"},\"query\":\"query Submissions($offset: Int!, $limit: Int!, $lastKey: String, $questionSlug: String!) {\\n  submissionList(offset: $offset, limit: $limit, lastKey: $lastKey, questionSlug: $questionSlug) {\\n    lastKey\\n    hasNext\\n    submissions {\\n      id\\n      statusDisplay\\n      lang\\n      runtime\\n      timestamp\\n      url\\n      isPending\\n      __typename\\n    }\\n    __typename\\n  }\\n}\\n\"}"
        submission_payload = submission_payload.replace("QuestionName", slug)
        submissions = self.session.post(self.graphql_url, headers=submission_headers, data=submission_payload)
        submissions = json.loads(submissions.text)
        submission_list = {}
        submissions = submissions["data"]["submissionList"]["submissions"]
        if submissions is None:
            return None
        for submission in submissions:
            status = submission["statusDisplay"]
            if status == "Accepted":
                language = submission["lang"]
                if language not in submission_list:
                    url = "https://leetcode.com/" + submission["url"]
                    submission_detail = self.session.get(url).text
                    submission_code = submission_detail[
                                      submission_detail.find("submissionCode") + 17:submission_detail.find(
                                          "editCodeUrl") - 5]
                    submission_code = self.HandleCode(submission_code)
                    # todo: runtime
                    # runtime = submission["runtime"]
                    submission_list[language] = submission_code
        return submission_list

    def HandleCode(self, code):
        code = code.replace('\\u0009', '\t')
        code = code.replace('\\u000A', '\n')
        code = code.replace('\\u0027', '\'')
        code = code.replace('\\u0022', '"')
        code = code.replace('\\u002D', '-')
        code = code.replace('\\u003C', '<')
        code = code.replace('\\u003E', '>')
        code = code.replace('\\u003D', '=')
        code = code.replace('\\u003B', ';')
        code = code.replace('\\u0026', '&')
        code = code.replace('\\u002A', '*')
        return code
