class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        n, m = len(haystack), len(needle)
        if m == 0:
            return 0
        for i in range(n):
            if i + m > n:
                return -1
            j = 0
            while i + j < n and j < m and haystack[i + j] == needle[j]:
                j += 1
            if j == m:
                return i
        return -1