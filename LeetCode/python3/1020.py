class Solution:
    def numEnclaves(self, A: List[List[int]]) -> int:
        dir_x, dir_y = [0, 1, 0, -1], [1, 0, -1, 0]
        m, n = len(A), len(A[0]) if len(A) != 0 else 0
        if m == 0:
            return 0
        queue = []
        for i in range(m):
            for j in range(n):
                if (i == 0 or i == m - 1 or j == 0 or j == n - 1) and A[i][j] == 1:
                    A[i][j] = 0
                    queue.append((i, j))
        while queue:
            i, j = queue[0]
            for k in range(4):
                x = i + dir_x[k]
                y = j + dir_y[k]
                if x >= 0 and x < m and y >= 0 and y < n and A[x][y] == 1:
                    A[x][y] = 0
                    queue.append((x, y))
            queue = queue[1:]
        res = 0
        for i in range(m):
            for j in range(n):
                res += A[i][j] == 1
        return res
