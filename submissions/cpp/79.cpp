class Solution {
public:
    bool exist(vector<vector<char>> &board, string word) {
        int n = board.size();
        if (n == 0)
            return false;
        int m = board[0].size(), len = word.size();
        if (n == 1 && m == 1 && len == 1 && board[0][0] == word[0])
            return true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == word[0]) {
                    char tmp = board[i][j];
                    board[i][j] = \u0027\u005C0\u0027;
                    SearchWord(board, word, n, m, i - 1, j, 1, len);
                    SearchWord(board, word, n, m, i + 1, j, 1, len);
                    SearchWord(board, word, n, m, i, j - 1, 1, len);
                    SearchWord(board, word, n, m, i, j + 1, 1, len);
                    board[i][j] = tmp;
                }
            }
        }
        return found;
    }

    void SearchWord(vector<vector<char>> &board, string word, int &n, int &m, int i, int j, int k, int &len) {
        if (found)
            return;
        if (i < 0 || j < 0 || i >= n || j >= m)
            return;
        if (k == len) {
            found = true;
            return;
        }
        if (board[i][j] == word[k]) {
            char tmp = board[i][j];
            board[i][j] = \u0027\u005C0\u0027;
            SearchWord(board, word, n, m, i - 1, j, k + 1, len);
            SearchWord(board, word, n, m, i + 1, j, k + 1, len);
            SearchWord(board, word, n, m, i, j - 1, k + 1, len);
            SearchWord(board, word, n, m, i, j + 1, k + 1, len);
            board[i][j] = tmp;
        }
    }

private:
    bool found = false;
};
