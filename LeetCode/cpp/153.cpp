class Solution {
public:
    int findMin(vector<int> nums) {
        int i = 0, j = nums.size() - 1, mid = 0;
        if (j == -1)
            return 0;
        while (i < j - 1) {
            mid = i + (j - i) / 2;
            if (nums[mid] > nums[i] && nums[mid] > nums[j])
                i = mid;
            else if (nums[mid] < nums[i] && nums[mid] < nums[j])
                j = mid;
            else
                return nums[i];
        }
        return min(nums[i], nums[j]);
    }
};