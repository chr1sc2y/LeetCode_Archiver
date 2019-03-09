class Solution:
    def countSubstrings(self, s: str) -> int:
        total = len(s)
        dp = [[0 for i in range(len(s))] for j in range(len(s))]
        for i in range(len(s)):
            dp[i][i] = 1
        for i in range(len(s)):
            for j in range(i):
                if s[i] == s[j] and (i == j + 1 or dp[j + 1][i - 1] == 1):
                    total += 1
                    dp[j][i] = 1
        return total
