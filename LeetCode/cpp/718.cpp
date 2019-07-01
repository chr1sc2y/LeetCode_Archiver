class Solution {
public:
    int findLength(vector<int> &A, vector<int> &B) {
        int nA = A.size(), nB = B.size();
        vector<vector<int>> dp(nA + 1, vector<int>(nB + 1, 0));
        for (int j = nB - 1; j >= 0; --j)
            dp[nA - 1][j] = (A[nA - 1] == B[j]);
        int maxLength = 0;
        for (int i = nA - 2; i >= 0; --i)
            for (int j = nB - 1; j >= 0; --j) {
                if (A[i] == B[j])
                    dp[i][j] = dp[i + 1][j + 1] + 1;
                maxLength = dp[i][j] > maxLength ? dp[i][j] : maxLength;
            }
        return maxLength;
    }
};