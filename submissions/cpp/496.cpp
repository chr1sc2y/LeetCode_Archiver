class Solution {
public:
    vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums) {
        stack<int> key;
        unordered_map<int, int> map;
        vector<int> ret;
        for (int i = 0; i < nums.size(); ++i) {
            while (!key.empty() && nums[i] > key.top()) {
                map.insert(pair<int, int>(key.top(), nums[i]));
                key.pop();
            }
            key.push(nums[i]);
        }
        for (int i = 0; i < findNums.size(); ++i) {
            if (map.find(findNums[i]) != map.end())
                ret.push_back(map[findNums[i]]);
            else
                ret.push_back(-1);
        }
        return ret;
    }
};