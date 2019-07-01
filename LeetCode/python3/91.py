class Solution:
    def numDecodings(self, s: str) -> int:
        if len(s) == 0 or s[0] == '0':
            return 0
        elif len(s) == 1:
            return 1
        dp = [0] * (len(s) + 1)
        dp[0] = 1
        dp[1] = 1
        for i in range(2, len(s) + 1):
            if s[i - 1] == '0' and (s[i - 2] not in ['1', '2']):
                return 0
            if s[i - 1] != '0':
                dp[i] += dp[i - 1]
            if int(s[i - 2:i]) <= 26 and s[i - 2] != '0':
                dp[i] += dp[i - 2]
        return dp[-1]
