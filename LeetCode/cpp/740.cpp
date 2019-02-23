class Solution {
public:
    int deleteAndEarn(vector<int> &nums) {
        int size = nums.size();
        if (size == 0)
            return 0;
        else if (size == 1)
            return nums[0];
        map<int, int> value;
        int maxNum = 0;
        for (int i = 0; i < size; ++i) {
            ++value[nums[i]];
            maxNum = maxNum < nums[i] ? nums[i] : maxNum;
        }
        for (int i = 1; i <= maxNum; ++i)
            value[i] *= i;
        vector<int> dp(maxNum + 1, 0);;
        dp[1] = value[1];
        for (int i = 2; i <= maxNum; ++i) {
            dp[i] = max(dp[i - 1], dp[i - 2] + value[i]);
        }
        return dp[maxNum];
    }
};
