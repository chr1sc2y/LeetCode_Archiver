class Solution:
    def numSquares(self, n: int) -> int:
        dp = [sys.maxsize] * (n + 1)
        square = [i * i for i in range(1, int(math.sqrt(n)) + 1)]
        dp[0], dp[1] = 0, 1
        for i in range(2, n + 1):
            for j in square:
                if j > i:
                    break
                dp[i] = min(dp[i], dp[i - j] + 1)
        return dp[n]
