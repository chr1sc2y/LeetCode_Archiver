class Solution {
public:
    int findNumberOfLIS(vector<int> &nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        vector<int> dp(n, 1);
        vector<int> len(n, 1);
        int maxLength = 1;
        for (int i = 1; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    if (dp[i] < dp[j] + 1) {
                        dp[i] = dp[j] + 1;
                        cnt = 0;
                    }
                }
                if (dp[i] == dp[j] + 1)
                    cnt += len[j];
            }
            len[i] = max(len[i], cnt);
            maxLength = max(maxLength, dp[i]);
        }
        int res = 0;
        for (int i = n - 1; i >= 0; --i)
            if (maxLength == dp[i])
                res += len[i];
        return res;
    }
};