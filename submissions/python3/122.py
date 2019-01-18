class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        size = len(prices)
        bought = False
        profit = 0
        price = 0
        for i in range(0, size - 1):
            if not bought:
                if prices[i] < prices[i + 1]:
                    bought = True
                    price = prices[i]
            else:
                if prices[i] > prices[i + 1]:
                    bought = False
                    profit += prices[i] - price
                    price = 0
        if bought:
            profit += prices[i + 1] - price
        return profit