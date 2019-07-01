class Solution:
    def validMountainArray(self, A):
        """
        :type A: List[int]
        :rtype: bool
        """
        size = len(A)
        if size < 3:
            return False
        i = 0
        while i + 1 < size and A[i] < A[i + 1]:
            i += 1
        if i == 0 or i == size - 1:
            return False
        while i + 1 < size and A[i] > A[i + 1]:
            i += 1
        return i == size - 1
