class Solution {
public:
    int findShortestSubArray(vector<int> &nums) {
        int n = nums.size(), minLen = INT_MAX;
        map<int, vector<int>> m;
        int size = 0;
        for (int i = 0; i < n; ++i) {
            m[nums[i]].push_back(i);
            if (size < m[nums[i]].size()) {
                size = m[nums[i]].size();
            }
        }
        for (auto iter : m) {
            if (iter.second.size() == size)
                minLen = min(minLen, iter.second[iter.second.size() - 1] - iter.second[0] + 1);
        }
        return minLen;
    }
};