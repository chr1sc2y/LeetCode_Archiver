class Solution {
public:
    vector<vector<int>> combine(int m, int k) {
        vector<int> nums;
        for (int i = 1; i <= m; ++i)
            nums.push_back(i);
        vector<vector<int>> ret;
        vector<int> subset;
        vector<int> visited(m, 0);
        BackTracking(nums, subset, ret, visited, 0, m,k);
        return ret;
    }

    void
    BackTracking(vector<int> &nums, vector<int> &subset, vector<vector<int>> &ret, vector<int> &visited, int i, int &n, int &k) {
        if (subset.size() == k) {
            ret.push_back(subset);
            return;
        }
        for (int j = i; j < n; ++j) {
            if (visited[j] != 1) {
                visited[j] = 1;
                subset.push_back(nums[j]);
                BackTracking(nums, subset, ret, visited, j + 1, n,k);
                subset.pop_back();
                visited[j] = 0;
            }
        }
    }
};