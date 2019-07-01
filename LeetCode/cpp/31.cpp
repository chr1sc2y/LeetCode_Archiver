class Solution {
public:
    void nextPermutation(vector<int> &nums) {
        int size = nums.size(), n = nums.size() - 2;
        while (n >= 0) {
            if (nums[n] < nums[n + 1])
                break;
            --n;
        }
        if (n >= 0) {
            int sub = 0, upper = INT_MAX;
            for (int i = n + 1; i < size; ++i) {
                if (nums[i] > nums[n] && upper > nums[i]) {
                    sub = i;
                    upper = nums[i];
                }
            }
            swap(nums[sub], nums[n]);
        }
        std::sort(nums.begin() + n + 1, nums.end());
    }
};