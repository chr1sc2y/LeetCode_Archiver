class Solution {
public:
    bool checkSubarraySum(vector<int> &nums, int k) {
        int n = nums.size();
        if (k == 0) {
            for (int i = 1; i < n; ++i) {
                int sum = nums[i];
                for (int j = i - 1; j >= 0; --j) {
                    sum += nums[j];
                    if (sum == 0)
                        return true;
                }
            }
            return false;
        }
        if (n == 0)
            return false;
        for (int i = 1; i < n; ++i) {
            int sum = nums[i];
            for (int j = i - 1; j >= 0; --j) {
                sum += nums[j];
                if (sum % k == 0)
                    return true;
            }
        }
        return false;
    }
};
