class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lowest, profit = sys.maxsize, 0
        for p in prices:
            lowest = min(lowest, p)
            profit = max(profit, p - lowest)
        return profit
