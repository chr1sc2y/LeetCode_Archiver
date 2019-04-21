class Solution {
public:
    bool canPartitionKSubsets(vector<int> &nums, int k) {
        int sum = 0, max_val = 0;
        for (auto &m:nums) {
            sum += m;
            max_val = max(max_val, m);
        }
        if (sum % k != 0 || max_val > sum / k)
            return false;
        vector<bool> visited(nums.size(), false);
        return BackTracking(sum / k, 0, sum / k, sum, nums, visited);
    }

    bool BackTracking(const int &sum, int pos, const int &sub, int left, vector<int> &nums, vector<bool> &visited) {
        if (left == 0) 
            return true;
        if (sub == 0)
            return (BackTracking(sum, 0, sum, left - sum, nums, visited));
        for (int i = pos; i < nums.size(); ++i) {
            if (!visited[i] && sub >= nums[i]) {
                visited[i] = true;
                if (BackTracking(sum, i + 1, sub - nums[i], left, nums, visited))
                    return true;
                visited[i] = false;
            }
        }
        return false;
    }
};
