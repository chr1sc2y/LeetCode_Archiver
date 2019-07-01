class Solution:
    def findLongestWord(self, s: str, d: List[str]) -> str:
        res = ""
        for target in d:
            i, j = 0, 0
            while i < len(target) and j < len(s):
                if target[i] == s[j]:
                    i += 1
                j += 1
            if i == len(target):
                if len(target) > len(res) or (len(target) == len(res) and target < res):
                    res = target
        return res
