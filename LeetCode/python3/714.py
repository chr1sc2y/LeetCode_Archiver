class Solution:
    def maxProfit(self, prices, fee):
        """
        :type prices: List[int]
        :type fee: int
        :rtype: int
        """
        size = len(prices)
        if size < 2:
            return 0
        profit = 0
        cost = prices[0]
        for i in range(1, size):
            if prices[i] < cost:
                cost = prices[i]
            elif prices[i] - fee > cost:
                profit += prices[i] - fee - cost
                cost = prices[i] - fee
        return profit
