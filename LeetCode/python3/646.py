class Solution:
    def findLongestChain(self, pairs: List[List[int]]) -> int:
        dp = [1 for i in range(len(pairs))]
        max_len = 0
        pairs = sorted(pairs, key=lambda x: x[0])
        for i in range(1, len(pairs)):
            for j in range(i):
                if pairs[i][0] > pairs[j][1]:
                    dp[i] = max(dp[i], dp[j] + 1)
            max_len = max(max_len, dp[i])
        return max_len
