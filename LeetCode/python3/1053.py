class Solution:
    def prevPermOpt1(self, A: List[int]) -> List[int]:
        n = len(A)
        for i in range(n - 2, -1, -1):
            k, num = 0, 0
            for j in range(i + 1, n):
                if A[j] < A[i] and num <= A[j]:
                    num = A[j]
                    k = j
            if k != 0:
                A[i], A[k] = A[k], A[i]
                return A
        return A
