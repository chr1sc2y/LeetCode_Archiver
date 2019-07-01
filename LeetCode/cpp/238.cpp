class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        vector<int> ret(nums.size(), 1);
        int temp = 1;
        for (int i = 0; i < nums.size() - 1; ++i)
            ret[i + 1] = ret[i] * nums[i];
        for (int i = nums.size() - 2; i >= 0; --i) {
            temp *= nums[i + 1];
            ret[i] *= temp;
        }
        return ret;
    }
};
