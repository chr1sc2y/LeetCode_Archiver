class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int size = s.size();
        vector<vector<int>> dp(size, vector<int>(size, 0));
        for (int i = 0; i < size; ++i)
            dp[i][i] = 1;
        for (int i = 1; i < size; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (s[i] == s[j])
                    dp[j][i] = dp[j + 1][i - 1] + 2;
                else
                    dp[j][i] = max(dp[j + 1][i], dp[j][i - 1]);
            }
        }
        return dp[0][size - 1];
    }
};