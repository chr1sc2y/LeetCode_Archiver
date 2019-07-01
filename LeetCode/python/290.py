class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        match, rev = {}, {}
        s = s.split(' ')
        if len(s) != len(pattern):
            return False
        for i in range(len(s)):
            if (pattern[i] in match and match[pattern[i]] != s[i]) or (s[i] in rev and rev[s[i]] != pattern[i]):
                return False
            match[pattern[i]] = s[i]
            rev[s[i]] = pattern[i]
        return True
            