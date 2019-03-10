class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board) {
        int n = board.size();
        vector<vector<bool>> row(9, vector<bool>(9, false)), col(9, vector<bool>(9, false));
        vector<vector<vector<bool>>> square(3, vector<vector<bool>>(3, vector<bool>(9, false)));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == '.')
                    continue;
                if (row[i][board[i][j] - '0' - 1] || col[j][board[i][j] - '0' - 1] ||
                    square[i / 3][j / 3][board[i][j] - '0' - 1])
                    return false;
                row[i][board[i][j] - '0' - 1] = true;
                col[j][board[i][j] - '0' - 1] = true;
                square[i / 3][j / 3][board[i][j] - '0' - 1] = true;
            }
        }
        return true;
    }
};
