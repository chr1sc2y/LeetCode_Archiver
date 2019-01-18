class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>> &A) {
        auto row = A.size();
        if (row == 0)
            return {};
        vector<vector<int>> ret;
        auto col = A[0].size();
        for (int i = 0; i < col; ++i) {
            vector<int> temp;
            for (int j = 0; j < row; ++j) {
                temp.push_back(A[j][i]);
            }
            ret.push_back(temp);
        }
        return ret;
    }
};
