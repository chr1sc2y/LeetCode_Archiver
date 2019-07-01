class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        int n = coins.size();
        if (amount == 0)
            return 0;
        if (n == 0)
            return -1;
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        for (int i = 1; i <= amount; ++i) {
            for (int j = 0; j < n; ++j)
                if (i - coins[j] >= 0)
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
        return dp[amount] == amount + 1 ? -1 : dp[amount];
    }
};