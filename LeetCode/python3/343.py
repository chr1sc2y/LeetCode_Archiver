class Solution:
    def integerBreak(self, n: int) -> int:
        dp = [0] * (n + 1)
        dp[1] = 1
        for i in range(2, n + 1):
            for d in range(i - 1, i // 2 - 1, -1):
                dp[i] = max(dp[i], max(d, dp[d]) * max(i - d, dp[i - d]))
        return dp[n]
