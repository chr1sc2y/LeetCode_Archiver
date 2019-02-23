class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        int n = nums.size();
        vector<vector<int>> ret;
        if (n == 0)
            return ret;
        sort(nums.begin(), nums.end());
        visited = vector<int>(n, 0);
        vector<int> temp;
        BackTracking(nums, 0, n, ret, temp);
        return ret;
    }

    void BackTracking(vector<int> &nums, int i, int &n, vector<vector<int>> &ret, vector<int> temp) {
        if (temp.size() == n) {
            ret.push_back(temp);
            return;
        }
        for (int j = 0; j < n; ++j) {
            if (j > 0 && nums[j] == nums[j - 1] && visited[j - 1] == 0)
                continue;
            if (visited[j] == 0) {
                temp.push_back(nums[j]);
                visited[j] = 1;
                BackTracking(nums, j + 1, n, ret, temp);
                visited[j] = 0;
                temp.pop_back();
            }
        }
    }

private:
    vector<int> visited;
};