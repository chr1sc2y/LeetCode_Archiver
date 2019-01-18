class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> ret;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < i + 1; ++j) {
                if (j == 0 || j == i)
                    temp.push_back(1);
                else
                    temp.push_back(ret[i - 1][j - 1] + ret[i - 1][j]);
            }
            ret.push_back(temp);
        }
        return ret;
    }
};