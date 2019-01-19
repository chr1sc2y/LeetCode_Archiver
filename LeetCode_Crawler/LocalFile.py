import os
import time
import pymongo
from LeetCode_Crawler.settings import mongo_collection, mongo_db, mongo_host, mongo_port


class LocalFile:
    file_format = {"cpp": ".cpp", "python3": ".py", "python": ".py", "mysql": ".sql"}
    language_format = {"cpp": "C++", "python3": "Python3", "python": "Python", "mysql": "MySQL"}

    def __init__(self):
        mongo_client = pymongo.MongoClient(mongo_host, mongo_port)
        self.mongo_db = mongo_client[mongo_db]
        self.mongo_collection = self.mongo_db[mongo_collection]

    def GenerateSolutionFolders(self, language_set):
        self.path = []
        self.root_path = "../../LeetCode/"
        if not os.path.exists(self.root_path):
            os.makedirs(self.root_path)
        for language in language_set:
            self.path.append(self.root_path + language + "/")
        for path in self.path:
            if not os.path.exists(path):
                os.makedirs(path)

    def GenerateREADME(self):
        # generate md file head
        time = self.GetTime()
        file = open(self.root_path + 'README.md', 'w')
        file.write("![logo](https://theme.zdassets.com/theme_assets/9008406/036323c6afd10392aa5b7e3a2eb7557d17955c81.png)\n")
        file.write("## <center><strong>LeetCode Solutions</strong></center>\n")
        file.write("#### <center>Last Updated: " + time +"</center>\n")
        file.write("### <center>Crawled by [ZintrulCre/LeetCode_Crawler](https://github.com/ZintrulCre/LeetCode_Crawler)</center>\n\n")

        file.write('| # | title | submissions | topics | difficulty | accepted rate | likes | dislikes |\n')
        file.write(
            '| :------: | :------: | :------: | :------: | :------: | :------: | :------: | :------: |\n')

        questions = self.mongo_collection.find().sort("id", -1)
        for question in questions:
            # generate local file, submissions, topics
            self.GenerateSolutionFile(question["id"], question["submission_list"])
            submissions = self.GenerateSubmissions(question["id"], question["submission_list"])
            if submissions == "":
                continue
            topics = self.GenerateTopics(question["topics"])
            title = self.GenerateTitle(question["title"], question["slug"])

            # generate md file
            file.writelines(['| ', str(question["id"]), ' | ', str(question["title"]), ' | ' + submissions + ' | ',
                             str(topics), ' | ', str(question["difficulty"]), ' | ', str(question["ac_rate"]),
                             ' | ', str(question["likes"]), ' | ', str(question["dislikes"]), '\n'])
            file.flush()
        file.close()

    def GetTime(self):
        timestamp = time.localtime((time.time()))
        year = str(timestamp.tm_year)
        month = str(timestamp.tm_mon)
        day = str(timestamp.tm_mday)
        hour = str(timestamp.tm_hour)
        minute = str(timestamp.tm_min)
        second = str(timestamp.tm_sec)
        return year + '-' + month + '-' + day + ' ' + hour + ':' + minute + ':' + second

    def GenerateSolutionFile(self, id, submission_list):
        submission_list = dict(submission_list)
        if submission_list:
            for language in submission_list.keys():
                file = open(self.root_path + language + '/' + str(id) + self.file_format[language], 'w')
                file.write(submission_list[language])
                file.flush()
                file.close()

    def GenerateSubmissions(self, id, submission_list):
        submissions = ""
        for language in submission_list:
            submissions += '[' + self.language_format[language] + ']' + '(' + self.root_path + language + "/" + str(
                id) + \
                           self.file_format[language] + '), '
        submissions = submissions[:-2]
        return submissions

    def GenerateTopics(self, topics):
        topic_string = ""
        for topic in topics:
            topic_string += topic + ", "
        topic_string = topic_string[:-2]
        return topic_string

    def GenerateTitle(self, title, slug):
        slug = "https://leetcode.com/problems/" + str(slug) + '/'
        title = '[' + str(title) + ']' + '(' + slug + ')'
        return title
