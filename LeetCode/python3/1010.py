class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        count = collections.Counter()
        total = 0
        for t in time:
            total += count[(60 - t % 60) % 60]
            count[t % 60] += 1
        return total
