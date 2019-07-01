class Solution {
    vector<int> dir_x = {-1, 0, 1, 0}, dir_y = {0, -1, 0, 1};
    int m, n;
public:
    void solve(vector<vector<char>> &board) {
        m = board.size(), n = m == 0 ? 0 : board[0].size();
        if (m == 0)
            return;
        for (int i = 0; i < m; ++i) {
            if (board[i][0] == 'O')
                DFS(board, i, 0);
            if (board[i][n - 1] == 'O')
                DFS(board, i, n - 1);
        }
        for (int j = 1; j < n - 1; ++j) {
            if (board[0][j] == 'O')
                DFS(board, 0, j);
            if (board[m - 1][j] == 'O')
                DFS(board, m - 1, j);
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                auto &c = board[i][j];
                if (c == 'O')
                    c = 'X';
                else if (c == 'Y')
                    c = 'O';
            }
        }
    }

    void DFS(vector<vector<char>> &board, int i, int j) {
        board[i][j] = 'Y';
        for (int k = 0; k < 4; ++k) {
            int x = i + dir_x[k], y = j + dir_y[k];
            if (x >= 0 && x < m && y >= 0 && y < n && board[x][y] == 'O')
                DFS(board, x, y);
        }
    }
};