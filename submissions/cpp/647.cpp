class Solution {
public:
    int countSubstrings(string s) {
        int size = s.size();
        int count = 0;
        vector<vector<bool>> dp(size, vector<bool>(size, false));
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j <= i; ++j) {
                dp[j][i] = ((i == j) || (s[i] == s[j] && ((i <= j + 2) || (dp[j + 1][i - 1] == 1))));
                if (dp[j][i])
                    ++count;
            }
        }
        return count;
    }
};