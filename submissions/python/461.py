class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        x = bin(x^y)
        l = len(x)
        sum = 0
        for i in range(l):
            if x[i] == \u00271\u0027:
                sum += 1
        return sum