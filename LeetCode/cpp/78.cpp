class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        int n = nums.size();
        vector<vector<int>> ret;
        vector<int> subset;
        vector<int> visited(n, 0);
        BackTracking(nums, subset, ret, visited, 0, n);
        return ret;
    }

    void
    BackTracking(vector<int> &nums, vector<int> &subset, vector<vector<int>> &ret, vector<int> &visited, int i, int n) {
        ret.push_back(subset);
        if (i == n)
            return;
        for (int j = i; j < n; ++j) {
            if (visited[j] != 1) {
                visited[j] = 1;
                subset.push_back(nums[j]);
                BackTracking(nums, subset, ret, visited, j + 1, n);
                subset.pop_back();
                visited[j] = 0;
            }
        }
    }
};