class Solution:
    def minSteps(self, n: int) -> int:
        res, m = 0, 2
        while n > 1:
            while n % m == 0:
                res += m
                n //= m
            m += 1
        return res