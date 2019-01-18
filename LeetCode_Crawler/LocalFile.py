import os
import re


class LocalFile:
    regex = re.compile("")

    def __init__(self):
        self.path = "../submissions/"
        self.cpp_path = self.path + "C++/"
        self.python_path = self.path + "Python3/"
        if not os.path.exists(self.path):
            os.makedirs(self.path)
        if not os.path.exists(self.cpp_path):
            os.makedirs(self.cpp_path)
        if not os.path.exists(self.python_path):
            os.makedirs(self.python_path)

    def Generate(self, id, submission_list):
        submission_list = dict(submission_list)
        if submission_list:
            print(submission_list)
            for language in submission_list.keys():
                file = 0
                if language == "cpp":
                    file = open(self.cpp_path + str(id) + ".cpp", 'w')
                elif language == "python3":
                    file = open(self.python_path + str(id) + ".py", 'w')
                file.write(submission_list[language])
                file.flush()
                file.close()
