class Solution {
public:
    bool stoneGame(vector<int> &piles) {
        int size = piles.size();
        vector<vector<int>> dp(size, vector<int>(size, 0));
        for (int i = 0; i < size; ++i)
            dp[i][i] = piles[i];
        for (int i = 1; i < size; ++i) {
            for (int j = i - 1; j >= 0; --j)
                dp[j][i] = max(piles[j] - dp[j + 1][i], piles[i] - dp[j][i - 1]);
        }
        return dp[0][size - 1];
    }
};
