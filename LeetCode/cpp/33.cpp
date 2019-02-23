class Solution {
public:
    int search(vector<int> &nums, int target) {
        int i = 0, j = nums.size() - 1, mid = 0, n = nums.size();
        if (n == 0)
            return -1;
        while (i < j) {
            mid = i + (j - i) / 2;
            if (nums[mid] > nums[i] && nums[mid] > nums[j])
                i = mid + 1;
            else if (nums[mid] < nums[i] && nums[mid] < nums[j])
                j = mid;
            else
                break;
        }
        i = nums[i] < nums[j] ? i : j;
        int start = 0, end = i - 1;
        if (target < nums[0] || i == 0) {
            start = i;
            end = n - 1;
        }
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] > target)
                end = mid - 1;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                return mid;
        }
        return -1;
    }
};