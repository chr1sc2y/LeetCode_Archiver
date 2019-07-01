class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> u;
        for (int i = 0; i < nums.size(); ++i) {
            int &&temp = target - nums[i];
            if (u.find(temp) != u.end())
                return {u[temp], i};
            u.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};