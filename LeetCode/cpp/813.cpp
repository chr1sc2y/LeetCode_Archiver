class Solution {
public:
    double largestSumOfAverages(vector<int> &A, int K) {
        int n = A.size();
        if (n == 0) return 0;
        vector<int> sum(n, 0);
        sum[0] = A[0];
        for (int i = 1; i < n; ++i)
            sum[i] = sum[i - 1] + A[i];
        vector<vector<double>> dp(n, vector<double>(K, 0));
        dp[0][0] = sum[0] * 1.0;
        for (int k = 0; k < K; ++k) {
            for (int i = 1; i < n; ++i) {
                if (k == 0) {
                    dp[i][0] = (sum[i] * 1.0 / (i + 1));
                    continue;
                }
                for (int j = 0; j < i; ++j) {
                    double t = dp[j][k - 1] + ((sum[i] - sum[j]) * 1.0 / (i - j));
                    dp[i][k] = dp[i][k] < t ? t : dp[i][k];
                }
            }
        }
        return dp[n - 1][K - 1];
    }
};