class Solution(object):
    def sortArrayByParity(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        j = 0
        for i in range(len(A)):
            if(A[i] % 2 == 0):
                A[i], A[j] = A[j], A[i]
                j += 1
        return A