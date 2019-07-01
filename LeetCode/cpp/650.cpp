class Solution {
public:
    int minSteps(int n) {
        if (n == 1)
            return 0;
        vector<int> dp(n + 1, INT_MAX);
        dp[1] = 0;
        dp[2] = 2;
        for (int i = 3; i <= n; ++i)
            for (int j = 1; j < i; ++j)
                if (i % j == 0)
                    dp[i] = min(dp[i], dp[j] + i / j);
        return dp[n];
    }
};
