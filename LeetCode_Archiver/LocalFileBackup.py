def GenerateSubmissions(self, id, submission_list):
    submissions = ""
    for language in submission_list:
        submissions += '[' + self.language_format[language] + ']' + \
                       '(https://github.com/ZintrulCre/LeetCode_Archiver/blob/ZintrulCre/LeetCode/' + language + "/" \
                       + str(id) + self.file_format[language] + '), '
    submissions = submissions[:-2]
    return submissions