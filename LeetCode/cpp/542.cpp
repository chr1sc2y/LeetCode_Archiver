class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = m == 0 ? 0 : matrix[0].size();
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (matrix[i][j] != 0)
                    matrix[i][j] = INT_MAX / 2;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] != 0) {
                    if (i - 1 >= 0)
                        matrix[i][j] = min(matrix[i][j], matrix[i - 1][j] + 1);
                    if (j - 1 >= 0)
                        matrix[i][j] = min(matrix[i][j], matrix[i][j - 1] + 1);
                }
            }
        }
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                if (matrix[i][j] != 0) {
                    if (i + 1 < m)
                        matrix[i][j] = min(matrix[i][j], matrix[i + 1][j] + 1);
                    if (j + 1 < n)
                        matrix[i][j] = min(matrix[i][j], matrix[i][j + 1] + 1);
                }
            }
        }
        return matrix;
    }
};