class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        int size = nums.size();
        if (size == 0)
            return {};
        set<vector<int>> vec_set;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size - 3; ++i) {
            for (int j = i + 1; j < size - 2; ++j) {
                int k = j + 1, l = size - 1, sum = nums[i] + nums[j];
                while (k < l) {
                    if (sum + nums[k] + nums[l] > target)
                        --l;
                    else if (sum + nums[k] + nums[l] < target)
                        ++k;
                    else {
                        vec_set.insert({nums[i], nums[j], nums[k], nums[l]});
                        --l;
                        ++k;
                    }
                }
            }
        }
        vector<vector<int>> ret;
        for (auto &s:vec_set)
            ret.push_back(s);
        return ret;
    }
};