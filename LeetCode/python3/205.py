class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        dict1, dict2 = {}, {}
        for i in range(len(s)):
            dict1[s[i]] = t[i]
        for i in range(len(t)):
            dict2[t[i]] = s[i]
        res1 = ""
        for i in range(len(s)):
            res1 += dict1[s[i]]
        res2 = ""
        for i in range(len(t)):
            res2 += dict2[t[i]]
        return res1 == t and res2 == s
