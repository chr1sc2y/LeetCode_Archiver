class Solution:
    def maxTurbulenceSize(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        size, maxLen, curLen = len(A), 1, 1
        if size <= 2:
            return size
        for i in range(1, size - 1):
            if (A[i] > A[i-1] and A[i] > A[i + 1]) or (A[i] < A[i-1] and A[i] < A[i + 1]):
                curLen += 1
                maxLen = max(maxLen, curLen)
            else:
                curLen = 1
        return 2 if maxLen == 1 else maxLen + 1