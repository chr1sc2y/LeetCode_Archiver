class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>> &matrix) {
        int res = 1;
        while (matrix.size() > res) {
            vector<int> std = matrix[0];
            vector<vector<int>> remain;
            for (int i = 1; i < matrix.size(); ++i) {
                int j = 0;
                while (j < matrix[i].size()) {
                    if ((std[0] ^ matrix[i][0]) != (std[j] ^ matrix[i][j]))
                        break;
                    ++j;
                }
                if (j != matrix[i].size())
                    remain.push_back(matrix[i]);
            }
            res = max(res, static_cast<int>(matrix.size() - remain.size()));
            matrix = remain;
        }
        return res;
    }
};
