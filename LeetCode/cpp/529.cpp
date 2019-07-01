class Solution {
    int dir[3] = {-1, 0, 1};
public:
    vector<vector<char>> updateBoard(vector<vector<char>> &board, vector<int> &click) {
        if (board[click[0]][click[1]] == 'M') {
            board[click[0]][click[1]] = 'X';
            return board;
        }
        DFS(board, click[0], click[1]);
        return board;
    }

    int DFS(vector<vector<char>> &board, int m, int n) {
        board[m][n] = 'B';
        int count = 0;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                int x = m + dir[i], y = n + dir[j];
                if (x == m && y == n)
                    continue;
                if (x >= 0 && x < board.size() && y >= 0 && y < board[x].size() && board[x][y] == 'M')
                    ++count;
            }
        }
        if (count > 0) {
            board[m][n] = static_cast<char>(count + '0');
            return 0;
        }
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                int x = m + dir[i], y = n + dir[j];
                if (x == m && y == n)
                    continue;
                if (x >= 0 && x < board.size() && y >= 0 && y < board[x].size() && board[x][y] == 'E')
                    DFS(board, x, y);
            }
        }
        return 0;
    }
};