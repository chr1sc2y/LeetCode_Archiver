class Solution {
public: //-2,6,3,-3,7,-3,8}
    int maxSubArray(vector<int> &nums) {
        int size = nums.size(), prev = 0, curr = 0, ret = INT_MIN;
        if (size == 0)
            return 0;
        for (int i = 0; i < nums.size(); ++i) {
            int val = prev + nums[i];
            ret = max(ret, val);
            if (val > 0)
                curr = val;
            else {
                if (nums[i] > 0)
                    curr = nums[i];
                else
                    curr = 0;
            }
            prev = curr;
        }
        return ret;
    }
};