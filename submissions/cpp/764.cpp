class Solution {
public:
    int orderOfLargestPlusSign(int N, vector<vector<int>> &mines) {
        vector<vector<int>> dp(N, vector<int>(N, N));
        for(int i = 0 ; i < mines.size(); ++i)
            dp[mines[i][0]][mines[i][1]] = 0;
        for (int i = 0; i < N; ++i) {
            int l = 0, r = 0, u = 0, d = 0;
            for (int j = 0; j < N; ++j) {
                int k = N - j - 1;
                dp[i][j] = min(dp[i][j], l = (dp[i][j] == 0 ? 0 : l + 1));
                dp[i][k] = min(dp[i][k], r = (dp[i][k] == 0 ? 0 : r + 1));
                dp[j][i] = min(dp[j][i], u = (dp[j][i] == 0 ? 0 : u + 1));
                dp[k][i] = min(dp[k][i], d = (dp[k][i] == 0 ? 0 : d + 1));
            }
        }
        int maxSign = 0;
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                maxSign = max(maxSign, dp[i][j]);
        return maxSign;
    }
};