class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        helper(candidates, target, 0, temp, 0);
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
            if (i == index || candidates[i] != candidates[i - 1]) {
                temp.push_back(candidates[i]);
                helper(candidates, target, sum + candidates[i], temp, i + 1);
                temp.pop_back();
            }
        }
    }

private:
    vector<vector<int>> ret;
};
