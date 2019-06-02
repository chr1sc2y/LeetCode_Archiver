class Solution:
    def fixedPoint(self, A: List[int]) -> int:
        for i in range(len(A)):
            if A[i] == i:
                return i
        return -1