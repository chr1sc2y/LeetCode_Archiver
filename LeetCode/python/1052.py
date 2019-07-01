class Solution(object):
    def maxSatisfied(self, customers, grumpy, X):
        """
        :type customers: List[int]
        :type grumpy: List[int]
        :type X: int
        :rtype: int
        """
        res, n = 0, len(customers)
        for i in range(n):
            res += customers[i] * (grumpy[i] ^ 1)
        for i in range(X):
            if i >= n:
                return res
            res += customers[i] * grumpy[i]
        temp = res
        for i in range(X, n):
            temp = temp - customers[i - X] * grumpy[i - X] + customers[i] * grumpy[i]
            res = max(res, temp)
        return res
