class Solution:
    def isIdealPermutation(self, A):
        """
        :type A: List[int]
        :rtype: bool
        """        
        size, m = len(A), 0
        for i in range(size - 2):
            m = max(m, A[i])
            if m > A[i + 2]:
                return False
        return True
