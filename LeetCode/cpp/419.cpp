class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size(), n = m == 0 ? 0 : board[0].size(), res = 0;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (board[i][j] == 'X' && (i + 1 == m ||  board[i + 1][j] == '.') && (j + 1 == n ||  board[i][j + 1] == '.'))
                    ++res;
        return res;
    }
};