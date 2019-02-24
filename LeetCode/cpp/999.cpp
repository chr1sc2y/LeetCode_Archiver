class Solution {
public:
    int numRookCaptures(vector<vector<char>> &board) {
        int x = 0, y = 0, m = board.size(), n = m != 0 ? board[0].size() : 0, total = 0;
        for (int i = 0; i < m; ++i) {
            int j = 0;
            for (j = 0; j < n; ++j) {
                if (board[i][j] == 'R') {
                    x = i, y = j;
                    break;
                }
            }
            if (j != n)
                break;
        }
        for (int i = x - 1; i >= 0; --i) {
            if (board[i][y] == 'p')
                ++total;
            if (board[i][y] == 'B' || board[i][y] == 'p')
                break;
        }
        for (int i = x + 1; i < m; ++i) {
            if (board[i][y] == 'p')
                ++total;
            if (board[i][y] == 'B' || board[i][y] == 'p')
                break;
        }
        for (int j = y - 1; j >= 0; --j) {
            if (board[x][j] == 'p')
                ++total;
            if (board[x][j] == 'B' || board[x][j] == 'p')
                break;
        }
        for (int j = y + 1; j < n; ++j) {
            if (board[x][j] == 'p')
                ++total;
            if (board[x][j] == 'B' || board[x][j] == 'p')
                break;
        }
        return total;
    }
};