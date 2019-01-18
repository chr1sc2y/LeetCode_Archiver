class Solution {
public:
    bool canPartition(vector<int> &nums) {
        int n = nums.size(), sum = 0;
        for (int i = 0; i < n; ++i)
            sum += nums[i];
        if (sum % 2)
            return false;
        sort(nums.rbegin(),nums.rend());
        return helper(nums, sum / 2, 0);
    }

    bool helper(vector<int> &nums, int sum, int i) {
        if (sum == nums[i])
            return true;
        else if (sum < nums[i])
            return false;
        return helper(nums, sum - nums[i], i + 1) || helper(nums, sum, i + 1);
    }
};
