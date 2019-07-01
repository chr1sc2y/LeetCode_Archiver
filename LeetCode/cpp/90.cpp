class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        vector<vector<int>> ret;
        vector<int> temp;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        BackTracking(nums, ret, temp, 0, n);
        map<vector<int>, bool> exist;
        for (int i = 0; i < ret.size(); ++i) {
            if (exist.find(ret[i]) == exist.end()) {
                exist.insert(map<vector<int>, bool>::value_type(ret[i], true));
            } else {
                ret.erase(ret.begin() + i);
                --i;
            }
        }
        return ret;
    }

    void BackTracking(vector<int> &num, vector<vector<int>> &ret, vector<int> &temp, int i, int &n) {
        ret.push_back(temp);
        if (i == n)
            return;
        for (int j = i; j < n; ++j) {
            temp.push_back(num[j]);
            BackTracking(num, ret, temp, j + 1, n);
            temp.pop_back();
        }
    }
};
