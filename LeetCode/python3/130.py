class Solution:
    def solve(self, board: List[List[str]]) -> None:
        def DFS(x, y):
            board[x][y] = 'M'
            dir_x, dir_y = [0, 1, 0, -1], [1, 0, -1, 0]
            for k in range(4):
                new_x, new_y = x + dir_x[k], y + dir_y[k]
                if new_x >= 0 and new_x < m and new_y >= 0 and new_y < n and board[new_x][new_y] == 'O':
                    DFS(new_x, new_y)

        m, n = len(board), len(board[0]) if len(board) > 0 else 0
        if m == 0:
            return
        for i in range(m):
            if board[i][0] == 'O':
                DFS(i, 0)
            if board[i][n - 1] == 'O':
                DFS(i, n - 1)
        for j in range(1, n - 1):
            if board[0][j] == 'O':
                DFS(0, j)
            if board[m - 1][j] == 'O':
                DFS(m - 1, j)
        for i in range(m):
            for j in range(n):
                if board[i][j] == 'M':
                    board[i][j] = 'O'
                elif board[i][j] == 'O':
                    board[i][j] = 'X'
           