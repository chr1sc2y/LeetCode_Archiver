class Solution {
public:
    int findUnsortedSubarray(vector<int> &nums) {
        int max_val = INT_MIN, min_val = INT_MAX, start = -1, end = -1, n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] > nums[i + 1]) {
                max_val = max(max_val, nums[i]);
                min_val = min(min_val, nums[i + 1]);
            }
        }
        for (start = 0; start < n; ++start) {
            if (nums[start] > min_val)
                break;
        }
        for (end = n - 1; end >= 0; --end) {
            if (nums[end] < max_val)
                break;
        }
        return start > end ? 0 : end - start + 1;
    }
};
