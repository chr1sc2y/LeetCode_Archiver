class Solution(object):
    def nthUglyNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        primes = [2, 3, 5]
        m = len(primes)
        factor, res = [0 for _ in range(m)], [1 for _ in range(n)]
        for i in range(1, n):
            res[i] = sys.maxsize
            for j in range(m):
                res[i] = min(res[i], primes[j] * res[factor[j]])
            for j in range(m):
                if primes[j] * res[factor[j]] == res[i]:
                    factor[j] += 1
        return res[-1]
