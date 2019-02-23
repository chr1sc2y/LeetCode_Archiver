class Solution:
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        m,n = len(matrix), len(matrix[0]) if len(matrix) > 0 else 0
        if m == 0:
            return False
        i , j = m - 1, 0
        while i >= 0 and j < n:
            if target > matrix[i][j]:
                j += 1
            elif target < matrix[i][j]:
                i -= 1
            else:
                return True
        return False