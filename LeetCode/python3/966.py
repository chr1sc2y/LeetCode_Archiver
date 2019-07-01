class Solution:
    def spellchecker(self, wordlist, queries):
        """
        :type wordlist: List[str]
        :type queries: List[str]
        :rtype: List[str]
        """
        standardDict = set()
        lowerCaseDict = {}
        vowelDict = {}
        ret = []
        
        for i in range(0, len(wordlist)):
            word = wordlist[i]
            standardDict.add(word)
            word = word.lower()
            if word not in lowerCaseDict:
                lowerCaseDict[word] = i
            word = self.ReplacedStr(word)
            if word not in vowelDict:
                vowelDict[word] = i

        for i in range(0, len(queries)):
            if queries[i] in standardDict:
                ret.append(queries[i])
            elif queries[i].lower() in lowerCaseDict:
                ret.append(wordlist[lowerCaseDict[queries[i].lower()]])
            else:
                query = self.ReplacedStr(queries[i])
                if query in vowelDict:
                    ret.append(wordlist[vowelDict[query]])
                else:
                    ret.append("")

        return ret

    def ReplacedStr(self, str):
        str = str.lower()
        for v in "aeiou":
            str = str.replace(v, '#')
        return str
