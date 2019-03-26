class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        m = len(matrix)
        if m == 0:
            return []
        n = len(matrix[0])
        total = m * n
        top, left = 0, 0
        dir_x = [0, 1, 0, -1]
        dir_y = [1, 0, -1, 0]
        x, y, status = 0, 0, 0
        ret = []
        while total > 0:
            if matrix[x][y] is not None:
                ret.append(matrix[x][y])
                total -= 1
            matrix[x][y] = None
            i = x + dir_x[status]
            j = y + dir_y[status]
            if i >= top and i < m and j >= left and j < n and matrix[i][j] != None:
                x, y = i, j
            elif j >= n:
                status += 1
                top += 1
            elif i >= m:
                status += 1
                n -= 1
            elif j < left:
                status += 1
                m -= 1
            elif i < top:
                status = 0
                left += 1
            else:
                break
        return ret
