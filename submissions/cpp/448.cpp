class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        auto size = nums.size();
        for (int i = 0; i < size; ++i)
            while (nums[i] != i + 1 && nums[i] != nums[nums[i] - 1])
                swap(nums[i], nums[nums[i] - 1]);
        vector<int> ret;
        for (int i = 0; i < size; ++i)
            if (nums[i] != i + 1)
                ret.push_back(i + 1);
        return ret;
    }
};