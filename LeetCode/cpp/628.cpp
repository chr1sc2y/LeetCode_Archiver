class Solution {
public:
    int maximumProduct(vector<int> &nums) {
        int n = nums.size();
        int min1 = 0, min2 = 0, max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        for (int i = 0; i < n; ++i) {
            if (nums[i] < min1) {
                min2 = min1;
                min1 = nums[i];
            } else if (nums[i] < min2) {
                min2 = nums[i];
            }
            if (nums[i] > max1) {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i] > max2) {
                max3 = max2;
                max2 = nums[i];
            } else if (nums[i] > max3)
                max3 = nums[i];
        }
        return max(min1 * min2 * max1, max1 * max2 * max3);
    }
};