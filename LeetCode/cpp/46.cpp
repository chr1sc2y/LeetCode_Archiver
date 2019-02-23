class Solution {
public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<int> visited(nums.size(), 0);
        vector<vector<int>> ret;
        vector<int> temp;
        BackTracking(nums, visited, temp, nums.size(), ret);
        return ret;
    }

    void BackTracking(vector<int> &nums, vector<int> &visited, vector<int> &temp, int n, vector<vector<int>> &ret) {
        if (n == 0) {
            ret.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (visited[i] == 0) {
                visited[i] = 1;
                temp.push_back(nums[i]);
                BackTracking(nums, visited, temp, n - 1, ret);
                temp.pop_back();
                visited[i] = 0;
            }
        }
    }
};