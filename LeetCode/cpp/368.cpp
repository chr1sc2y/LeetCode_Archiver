class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n == 0) return nums;
        vector<int> dp(n, 0);
        vector<int> pre(n, -1);
        int maxLength = 0, index = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    pre[i] = j;
                    if (maxLength < dp[i]) {
                        maxLength = dp[i];
                        index = i;
                    }
                }
            }
        }
        vector<int> temp;
        int i = index;
        while (i >= 0) {
            temp.push_back(nums[i]);
            i = pre[i];
        }
        sort(temp.begin(), temp.end());
        return temp;
    }
};
