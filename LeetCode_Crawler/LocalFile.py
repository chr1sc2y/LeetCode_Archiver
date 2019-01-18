import os


class LocalFile:
    file_format = {"cpp": ".cpp", "python3": ".py", "python": ".py", "MySQL": ".sql"}
    language_format = {"cpp": "C++", "python3": "Python3", "python": "Python", "MySQL": "MySQL"}

    def __init__(self):
        self.root_path = "../submissions/"
        self.cpp_path = self.root_path + "cpp/"
        self.python_path = self.root_path + "python/"
        self.python_path = self.root_path + "python3/"
        self.sql_path = self.root_path + "MySQL/"
        if not os.path.exists(self.root_path):
            os.makedirs(self.root_path)
        if not os.path.exists(self.cpp_path):
            os.makedirs(self.cpp_path)
        if not os.path.exists(self.python_path):
            os.makedirs(self.python_path)

    def GenerateLocalFile(self, id, submission_list):
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
