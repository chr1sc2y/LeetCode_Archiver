class Solution {
public:
    int totalNQueens(int n) {
        int res = 0;
        string temp = "";
        for (int i = 0; i < n; ++i)
            temp += ".";
        vector<string> board(n, temp);
        unordered_map<int, bool> left_diagonal, right_diagonal;
        vector<bool> row(n, false), col(n, false);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                left_diagonal[i + j] = false;
                right_diagonal[i - j] = false;
            }
        }
        Backtrack(0, n, board, res, col, left_diagonal, right_diagonal);
        return res;

    }

    void Backtrack(int i, int &n, vector<string> &board, int &res,
                   vector<bool> &col, unordered_map<int, bool> &left_diagonal,
                   unordered_map<int, bool> &right_diagonal) {
        if (i == n) {
            ++res;
            return;
        }
        for (int j = 0; j < n; ++j) {
            if (!col[j] && !left_diagonal[i + j] && !right_diagonal[i - j]) {
                col[j] = true;
                left_diagonal[i + j] = true;
                right_diagonal[i - j] = true;
                board[i][j] = 'Q';
                Backtrack(i + 1, n, board, res, col, left_diagonal, right_diagonal);
                board[i][j] = '.';
                col[j] = false;
                left_diagonal[i + j] = false;
                right_diagonal[i - j] = false;
            }
        }
    }
};
