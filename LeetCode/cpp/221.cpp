class Solution {
public:
    int maximalSquare(vector<vector<char>> &matrix) {
        int n = matrix.size();
        if (n == 0)
            return 0;
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int temp0 = 0;
        for (int i = 0; i < n; ++i) {
            dp[i][0] = (matrix[i][0] == '1' ? 1 : 0);
            temp0 = max(temp0, dp[i][0]);
        }
        if (m == 1)
            return temp0;
        int temp1 = 0;
        for (int j = 0; j < m; ++j) {
            dp[0][j] = (matrix[0][j] == '1' ? 1 : 0);
            temp1 = max(temp1, dp[0][j]);
        }
        if (n == 1)
            return temp1;
        int maxLen = max(temp0, temp1);
        for (int i = 1; i < n; ++i)
            for (int j = 1; j < m; ++j) {
                dp[i][j] = (matrix[i][j] == '0' ? 0 : min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1);
                maxLen = max(maxLen, dp[i][j]);
            }
        return maxLen * maxLen;
    }
};