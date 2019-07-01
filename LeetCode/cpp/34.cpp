class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int i = 0, j = nums.size() - 1, mid = 0, x = i, y = j;
        if (j < 0)
            return {-1, -1};
        while (i < j) {
            mid = i + (j - i) / 2;
            if (nums[mid] < target)
                i = mid + 1;
            else if (nums[mid] >= target)
                j = mid - 1;
        }
        if (j < 0 || nums[j] < target)
            ++j;
        while (x < y) {
            mid = x + (y - x) / 2;
            if (nums[mid] <= target)
                x = mid + 1;
            else if (nums[mid] > target)
                y = mid - 1;
        }
        if (x < 0 || nums[x] > target)
            --x;
        return (x >= j ? vector<int>{j, x} : vector<int>{-1, -1});
    }
};