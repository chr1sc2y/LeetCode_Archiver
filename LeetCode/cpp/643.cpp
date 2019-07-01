class Solution {
public:
    double findMaxAverage(vector<int> &nums, int k) {
        int n = nums.size();
        if (n == 0)
            return 0;
        int sum = nums[0], maxSum = sum;
        int i = 1;
        while (i < k) {
            sum += nums[i];
            maxSum = sum;
            ++i;
        }
        for (; i < n; ++i) {
            sum = sum + nums[i] - nums[i - k];
            maxSum = max(maxSum, sum);
        }
        return (maxSum * 1.0) / k;
    }
};