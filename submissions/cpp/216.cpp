class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ret;
        vector<int> temp;
        helper(k, n, ret, temp, 1);
        return ret;
    }

    void helper(int n, int sum, vector<vector<int>> &ret, vector<int> &temp, int index) {
        if (sum == 0 && n == 0) {
            ret.push_back(temp);
            return;
        }
        for (int i = index; i <= 9; ++i) {
            if (sum - i < 0)
                break;
            temp.push_back(i);
            helper(n - 1, sum - i, ret, temp, i + 1);
            temp.pop_back();
        }
    }
};
