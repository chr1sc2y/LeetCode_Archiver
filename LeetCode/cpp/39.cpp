class Solution {
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        for (int i = 0; i < candidates.size(); ++i) {
            vector<int> temp;
            temp.push_back(candidates[i]);
            int index = 0;
            helper(candidates, target, candidates[i], temp, i);
        }
        return ret;
    }

    void helper(vector<int> &candidates, int &target, int sum, vector<int> &temp, int index) {
        if (sum == target)
            ret.push_back(temp);
        if (sum >= target)
            return;
        for (int i = index; i < candidates.size(); ++i) {
            if (sum + candidates[i] > target)
                continue;
            temp.push_back(candidates[i]);
            helper(candidates, target, sum + candidates[i], temp, i);
            temp.erase(temp.end() - 1);
        }
    }

private:
    vector<vector<int>> ret;
};