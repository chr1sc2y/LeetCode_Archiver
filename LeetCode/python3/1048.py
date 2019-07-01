class Solution:
    def longestStrChain(self, words: List[str]) -> int:
        dp = {}
        for word in sorted(words, key=len):
            dp[word] = 1
            for i in range(len(word)):
                temp = word[:i] + word[i + 1:]
                dp[word] = max(dp.get(word, 0), dp.get(temp, 0) + 1)
        return max(dp.values() or [1])
