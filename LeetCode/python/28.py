class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        n, m = len(haystack), len(needle)
        if len(needle) == 0:
            return 0
        for i in range(n):
            if i + m > n:
                return -1
            x, y = i, 0
            while x < n and y < m and haystack[x] == needle[y]:
                x += 1
                y += 1
            if y == m:
                return i
        return -1