class Solution {
public:
    int minFallingPathSum(vector<vector<int>> &A) {
        if (A.size() == 0) return 0;
        if (A[0].size() == 0) return 0;
        int size = A.size(), minSum = INT_MAX;
        vector<vector<int>> dp(size + 2, vector<int>(size + 2, INT_MAX));
        for (int i = 1; i <= size; ++i)
            dp[1][i] = A[0][i - 1];
        for (int i = 2; i <= size; ++i) {
            for (int j = 1; j <= size; ++j) {
                dp[i][j] = A[i - 1][j - 1] + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i - 1][j + 1]));
            }
        }
        for (int i = 1; i <= size; ++i)
            minSum = min(minSum, dp[size][i]);
        return minSum;
    }
};