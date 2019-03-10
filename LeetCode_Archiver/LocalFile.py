import os
import time


class LocalFile:
    file_format = {"cpp": ".cpp", "python3": ".py", "python": ".py", "mysql": ".sql", "golang": ".go", "java": ".java",
                   "c": ".c", "javascript": ".js", "php": ".php", "csharp": ".cs", "ruby": ".rb", "swift": ".swift",
                   "scala": ".scl", "kotlin": ".kt", "rust": ".rs"}
    language_format = {"cpp": "C++", "python3": "Python3", "python": "Python", "mysql": "MySQL", "golang": "Golang",
                       "java": "Java", "c": "C", "javascript": "JavaScript", "php": "PHP", "csharp": "C#",
                       "ruby": "Ruby", "swift": "Swift", "scala": "Scala", "kotlin": "Kotlin", "rust": "Rust"}

    def __init__(self, data_set, language_set):
        self.data_set = data_set
        self.language_set = language_set
        self.GenerateFolders()
        self.GenerateFiles()

    def GenerateFolders(self):
        self.path = []
        self.root_path = "LeetCode/"
        if not os.path.exists(self.root_path):
            os.makedirs(self.root_path)
        for language in self.language_set:
            self.path.append(self.root_path + language + "/")
        for path in self.path:
            if not os.path.exists(path):
                os.makedirs(path)

    def GenerateFiles(self):
        # generate md file head
        time = self.GetTime()
        file = open(self.root_path + 'README.md', 'w')
        file.write(
            '<p align="center"><img src="https://theme.zdassets.com/theme_assets/9008406/036323c6afd10392aa5b7e3a2eb7557d17955c81.png"></p>')
        file.write(
            "<h3 align='center'><strong>LeetCode Solutions</strong></center></h3>")
        file.write('<p align="center">Last Updated: ' + time + '</p>')
        file.write(
            '<p align="center">Downloaded by <a href = "https://github.com/ZintrulCre/LeetCode_Archiver">ZintrulCre/LeetCode_Archiver</a></p>\n\n')

        file.write('<p align="center"><img src="TopicFigure.png"></p>\n\n')
        file.write('<p align="center"><img src="LanguageFigure.png"></p>\n\n')
        file.write('<p align="center"><img src="DifficultyFigure.png"></p>\n\n')
        # file.write('<p align="center"><img src="LeetCode/TopicFigure.png"></p>\n\n')
        # file.write('<p align="center"><img src="LeetCode/LanguageFigure.png"></p>\n\n')
        # file.write('<p align="center"><img src="LeetCode/DifficultyFigure.png"></p>\n\n')

        file.write(
            '| # | title | submissions | topics | difficulty | accepted rate | likes | dislikes |\n')
        file.write(
            '| :------: | :------: | :------: | :------: | :------: | :------: | :------: | :------: |\n')

        questions = sorted(self.data_set, key=lambda x: x["id"], reverse=True)
        for question in questions:
            # generate local file, submissions, topics
            self.GenerateSolutionFile(question["id"], question["submission_list"])
            submissions = self.GenerateSubmissions(question["id"], question["submission_list"])
            if submissions == "":
                continue
            topics = self.GenerateTopics(question["topics"])
            title = self.GenerateTitle(question["title"], question["slug"])

            # generate md file
            file.writelines(['| ', str(question["id"]), ' | ', title, ' | ' + submissions + ' | ',
                             str(topics), ' | ', str(question["difficulty"]), ' | ', str(
                    question["ac_rate"]),
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
                file = open(self.root_path + language + '/' +
                            str(id) + self.file_format[language], 'w')
                file.write(submission_list[language])
                file.flush()
                file.close()

    def GenerateSubmissions(self, id, submission_list):
        submissions = ""
        for language in submission_list:
            # submissions += '[' + self.language_format[language] + '](LeetCode/' + language + "/" + str(id) + self.file_format[
            #     language] + '), '
            submissions += '[' + self.language_format[language] + '](' + language + "/" + str(id) + self.file_format[
                language] + '), '
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
