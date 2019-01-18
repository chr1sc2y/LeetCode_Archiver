class Solution {
public:
    int pivotIndex(vector<int> &nums) {
        int n = nums.size();
        if (n == 0)
            return -1;
        double sum = 0.0;
        for (int i = 0; i < n; ++i)
            sum += nums[i];
        if ((sum - (nums[0] * 1.0)) == 0)
            return 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i - 1] * 1.0 == (sum - (nums[i] * 1.0)) / 2.0)
                return i;
            nums[i] += nums[i - 1];
        }
        return -1;
    }
};