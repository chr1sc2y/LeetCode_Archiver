class Solution {
public:
    int search(vector<int> &nums, int target) {
        int i = 0, j = nums.size() - 1, index;
        while (i <= j) {
            int index = (i + j) / 2;
            if (nums[index] > target)
                j = index - 1;
            else if (nums[index] < target)
                i = index + 1;
            else
                return index;
        }
        return -1;
    }
};