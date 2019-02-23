class Solution:
    def transpose(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        row, col = len(A), len(A[0])
        res = [[0 for i in range(row)] for j in range(col)]
        for i in range(col):
           for j in range(row):
               res[i][j] = A[j][i]
        return res