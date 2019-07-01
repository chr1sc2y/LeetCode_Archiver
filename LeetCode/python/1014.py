class Solution(object):
    def maxScoreSightseeingPair(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        prev, curr = A[0] + 0, -sys.maxsize
        for i in range(1, len(A)):
            curr = max(curr, A[i] - i + prev)
            prev = max(prev, A[i] + i)
        return curr
