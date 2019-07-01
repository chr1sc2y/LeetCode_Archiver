class Solution(object):
    def findDuplicate(self, paths):
        """
        :type paths: List[str]
        :rtype: List[List[str]]
        """
        duplicated = {}
        for path in paths:
            str = path.split(' ')
            folder = str[0] + '/'
            for i in range(1, len(str)):
                parentheses = str[i].find('(')
                content = str[i][parentheses + 1:str[i].find(')')]
                file = str[i][:parentheses]
                if content not in duplicated:
                    duplicated[content] = []
                duplicated[content].append(folder + file)
        ret = []
        for content, files in duplicated.items():
            if len(files) > 1:
                ret.append(files)
        return ret
