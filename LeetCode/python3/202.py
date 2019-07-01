class Solution:
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        s = set()
        while n > 0:
            k = n
            sum = 0
            while (k > 0):
                sum += (k % 10) ** 2
                k //= 10
            n = sum
            if n == 1:
                return True
            if sum in s:
                return False
            s.add(sum)