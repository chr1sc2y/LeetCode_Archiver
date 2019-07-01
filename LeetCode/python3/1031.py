class Solution:
    def maxSumTwoNoOverlap(self, A: List[int], L: int, M: int) -> int:
        prefix, n, res, left = [0 for _ in range(len(A) + 1)], len(A) + 1, 0, 0
        for i in range(1, n):
            prefix[i] = prefix[i - 1] + A[i - 1]
        for i in range(L + M, n):
            left = max(left, prefix[i - M] - prefix[i - M - L])
            res = max(res, left + prefix[i] - prefix[i - M])
        left = 0
        for i in range(L + M, n):
            left = max(left, prefix[i - L] - prefix[i - M - L])
            res = max(res, left + prefix[i] - prefix[i - L])
        return res
