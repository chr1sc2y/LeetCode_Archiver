class Solution(object):
    def maxCount(self, m, n, ops):
        """
        :type m: int
        :type n: int
        :type ops: List[List[int]]
        :rtype: int
        """
        for o in ops:
            m = min(m, o[0])
            n = min(n, o[1])
        return m * n