class Solution:
    def maxScoreSightseeingPair(self, A: List[int]) -> int:
        prev, curr = A[0] + 0, -sys.maxsize
        for i in range(1, len(A)):
            curr = max(curr, A[i] - i + prev)
            prev = max(prev, A[i] + i)
        return curr
