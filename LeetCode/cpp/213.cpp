class Solution {
public:
    int rob(vector<int> &nums) {
        int n = nums.size();
        if (n == 0) return 0;
        else if (n == 1) return nums[0];
        else if (n == 2) return max(nums[0], nums[1]);
        return (max(helper(nums, 0, n - 1), helper(nums, 1, n)));
    }

    int helper(vector<int> &nums, int i, int j) {
        if (j - i == 2) return max(nums[i], nums[i + 1]);
        int prev = nums[i], last = max(nums[i + 1], nums[i]), curr;
        for (int k = i + 2; k < j; ++k) {
            curr = max(prev + nums[k], last);
            prev = last;
            last = curr;
        }
        return curr;
    }
};