class Solution {
public:
    int findPaths(int m, int n, int N, int x, int y) {
        vector<vector<vector<unsigned int>>> dp(m, vector<vector<unsigned int>>(n, vector<unsigned int>(N + 1, 0)));
        for (int k = 1; k <= N; ++k) {
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    unsigned int up = (i == 0 ? 1 : dp[i - 1][j][k - 1]) % 1000000007;
                    unsigned int down = (i == m - 1 ? 1 : dp[i + 1][j][k - 1]) % 1000000007;
                    unsigned int left = (j == 0 ? 1 : dp[i][j - 1][k - 1]) % 1000000007;
                    unsigned int right = (j == n - 1 ? 1 : dp[i][j + 1][k - 1]) % 1000000007;
                    dp[i][j][k] = (up + down + left + right) % 1000000007;
                }
            }
        }
        return dp[x][y][N];
    }
};