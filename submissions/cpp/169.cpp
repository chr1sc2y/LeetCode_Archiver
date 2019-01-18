class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int index = 0, val = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[index])
                ++val;
            else --val;
            if (val == 0) {
                index = i;
                val = 1;
            }
        }
        return nums[index];
    }
};