class Solution {
public:
    vector<string> summaryRanges(vector<int> &nums) {
        int size = nums.size();
        if (size == 0)
            return {};
        vector<string> ret;
        int start = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1])
                    ret.push_back(to_string(start));
                else
                    ret.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                start = nums[i];
            }
        }
        if (start == nums[size - 1])
            ret.push_back(to_string(start));
        else
            ret.push_back(to_string(start) + "->" + to_string(nums[size - 1]));
        return ret;
    }
};