class Solution {
public:
    int minSwap(vector<int> &A, vector<int> &B) {
        int n = A.size();
        if (n == 0)
            return 0;
        vector<vector<int>> dp(2, vector<int>(n, INT_MAX));
        dp[0][0] = 0;
        dp[1][0] = 1;
        for (int i = 1; i < n; ++i) {
            if (A[i - 1] < A[i] && B[i - 1] < B[i]) {
                dp[0][i] = dp[0][i - 1];
                dp[1][i] = dp[1][i - 1] + 1;
            }
            if (A[i - 1] < B[i] && B[i - 1] < A[i]) {
                dp[0][i] = min(dp[0][i], dp[1][i - 1]);
                dp[1][i] = min(dp[1][i], dp[0][i - 1] + 1);
            }
        }
        return min(dp[0][n - 1], dp[1][n - 1]);
    }
};