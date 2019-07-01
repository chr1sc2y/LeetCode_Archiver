class Solution:
    def lenLongestFibSubseq(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        maxLen = 0
        S = set(A)
        for i in range(0, len(A)):
            for j in range(i + 1, len(A)):
                a, b = A[j], A[i] + A[j]
                cuurentLen = 2
                while b in S:
                    a, b = b, a + b
                    cuurentLen += 1
                maxLen = max(maxLen, cuurentLen)
        return maxLen if maxLen >= 3 else 0