class Solution {
public:
    int minSubArrayLen(int s, vector<int> &nums) {
        int sum = 0, i = 0, j = 0, size = nums.size(), min_len = INT_MAX;
        if (size == 0)
            return 0;
        while (j < size) {
            sum += nums[j];
            while (sum >= s) {
                sum -= nums[i];
                ++i;
                min_len = min(min_len, j - i + 2);
            }
            ++j;
        }
        return i == 0 ? 0 : min_len;
    }
};