class Solution:
    def numsSameConsecDiff(self, N, K):
        """
        :type N: int
        :type K: int
        :rtype: List[int]
        """
        ret = []
        if N == 1:
            ret.append(0)
        for i in range(1, 10):
            self.helper(i, N - 1, K, ret, i)
        return ret

    def helper(self, last, N, K, ret, val):
        if N <= 0:
            ret.append(val)
            return
        if last + K < 10:
            self.helper(last + K, N - 1, K, ret, val * 10 + last + K)
        if last - K >= 0 and K != 0:
            self.helper(last - K, N - 1, K, ret, val * 10 + last - K)