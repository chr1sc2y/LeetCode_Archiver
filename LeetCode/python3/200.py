class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        dir_x, dir_y = [0, 1, 0, -1], [1, 0, -1, 0]
        num, m, n = 0, len(grid), len(grid[0]) if len(grid) > 0 else 0
        if m == 0:
            return 0

        def DFS(x: int, y: int):
            if grid[x][y] == '0':
                return
            grid[x][y] = '0'
            for k in range(4):
                new_x, new_y = x + dir_x[k], y + dir_y[k]
                if new_x >= 0 and new_x < m and new_y >= 0 and new_y < n:
                    DFS(new_x, new_y)

        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1':
                    DFS(i, j)
                    num += 1
        return num
