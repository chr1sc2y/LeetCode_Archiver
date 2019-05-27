class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if len(strs) == 0:
            return ""
        pos, res = 0, ""
        for c in strs[0]:
            for i in range(1, len(strs)):
                if pos >= len(strs[i]) or strs[i][pos] != c:
                    return res
            res += c
            pos += 1
        return res
    