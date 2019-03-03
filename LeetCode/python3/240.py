class Solution:
    def searchMatrix(self, matrix, target) -> bool:
        m, n = len(matrix), len(matrix[0]) if len(matrix) > 0 else 0
        if m == 0:
            return False
        i, j = m - 1, 0
        while i >= 0 and j < n and matrix[i][j] != target:
            if matrix[i][j] > target:
                i -= 1
            else:
                j += 1
        if i < 0 or j >= n:
            return False
        return True
