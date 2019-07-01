class Solution {
public:
    void gameOfLife(vector<vector<int>> &board) {
        vector<vector<int>> ret(board);
        int m = board.size(), n = m == 0 ? 0 : board[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int &&neighbour = 0;
                for (int I = max(0, i - 1); I < min(m, i + 2); ++I) {
                    for (int J = max(0, j - 1); J < min(n, j + 2); ++J) {
                        if (I == i && J == j)
                            continue;
                        neighbour += board[I][J] & 1;
                    }
                }
                if (board[i][j] == 0) {
                    if (neighbour == 3)
                        ret[i][j] = 1;
                } else {
                    if (neighbour < 2 || neighbour > 3)
                        ret[i][j] = 0;
                }
            }
        }
        board = ret;
    }
};