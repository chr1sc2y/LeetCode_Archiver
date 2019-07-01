class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        auto size = nums.size();
        if (!size)
            return 0;
        int i = 0, j = 1;
        while (j < size) {
            if (nums[j] != nums[i])
                nums[++i] = nums[j];
            ++j;
        }
        return i + 1;
    }
};
