class Solution(object):
    def brokenCalc(self, X, Y):
        """
        :type X: int
        :type Y: int
        :rtype: int
        """
        if X >= Y:
            return X - Y
        return 1 + (self.brokenCalc(X, Y + 1) if Y % 2 == 1 else self.brokenCalc(X, Y // 2))