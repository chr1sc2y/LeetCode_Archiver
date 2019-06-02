class Solution:
    def fib(self, N):
        """
        :type N: int
        :rtype: int
        """ 
        if N == 0:
            return 0
        a, b = 0, 1
        for i in range(1, N):
            a, b = b, a+b
        return b
