class Solution {
public:
    int numSquares(int n) {
        vector<int> ps;
        for (int i = 1; i * i <= n; ++i)
            ps.push_back(i * i);
        int m = ps.size();
        vector<int> dp(n + 1, INT_MAX);
        dp[1] = 1;
        dp[0] = 0;
        for (int i = 2; i <= n; ++i) {
            int j = 0;
            while (i - ps[j] >= 0 && j < m) {
                dp[i] = min(dp[i], dp[i - ps[j]] + 1);
                ++j;
            }
        }
        return dp[n];
    }
};