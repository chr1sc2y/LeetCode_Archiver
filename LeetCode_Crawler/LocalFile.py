import os


class LocalFile:
    file_format = {"cpp": ".cpp", "python3": ".py", "python": ".py", "mysql": ".sql"}
    language_format = {"cpp": "C++", "python3": "Python3", "python": "Python", "mysql": "MySQL"}

    def __init__(self, language_set):
        self.path = []
        self.root_path = "../submissions/"
        for language in language_set:
            self.path.append(self.root_path + language + "/")
        for path in self.path:
            if not os.path.exists(path):
                os.makedirs(path)


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
