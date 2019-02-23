class Solution:
    def isMonotonic(self, A):
        """
        :type A: List[int]
        :rtype: bool
        """
        inc = dec = False
        for i in range(len(A) - 1):
            if A[i] < A[i+1]:
                inc = True
            elif A[i] > A[i+1]:
                dec = True
        return not (inc and dec)
