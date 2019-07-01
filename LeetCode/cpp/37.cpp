class Solution {
public:
    void solveSudoku(vector<vector<char>> &board) {
        vector<vector<bool>> row(9, vector<bool>(9, false)), col(9, vector<bool>(9, false));
        vector<vector<vector<bool>>> square(3, vector<vector<bool>>(3, vector<bool>(9, false)));
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] != '.') {
                    row[i][board[i][j] - '0' - 1] = true;
                    col[j][board[i][j] - '0' - 1] = true;
                    square[i / 3][j / 3][board[i][j] - '0' - 1] = true;
                }
            }
        }
        Backtrack(0, 0, board, row, col, square);
    }

    bool Backtrack(int i, int j, vector<vector<char>> &board, vector<vector<bool>> &row, vector<vector<bool>> &col,
                   vector<vector<vector<bool>>> &square) {
        if (i == 9)
            return true;
        if (board[i][j] != '.') {
            if (Backtrack(j == 8 ? i + 1 : i, j == 8 ? 0 : j + 1, board, row, col, square))
                return true;
        } else {
            for (int k = 1; k <= 9; ++k) {
                if (row[i][k - 1] || col[j][k - 1] || square[i / 3][j / 3][k - 1])
                    continue;
                board[i][j] = static_cast<char>('0' + k);
                row[i][k - 1] = true;
                col[j][k - 1] = true;
                square[i / 3][j / 3][k - 1] = true;
                if (Backtrack(j == 8 ? i + 1 : i, j == 8 ? 0 : j + 1, board, row, col, square))
                    return true;
                board[i][j] = '.';
                row[i][k - 1] = false;
                col[j][k - 1] = false;
                square[i / 3][j / 3][k - 1] = false;
            }
        }
        return false;
    }
};
