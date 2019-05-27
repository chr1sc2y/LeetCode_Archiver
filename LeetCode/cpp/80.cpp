class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size(), i = 0, j = 0, k = 0;
        while (j < n) {
            nums[i] = nums[j];
            k = j, ++i, ++j;
            if (j >= n)
                break;
            while (j < n && nums[j] == nums[j - 1])
                ++j;
            if (j == k + 1)
                continue;
            nums[i] = nums[j - 1];
            ++i;
        }
        return i;
    }
};
