class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = m == 0 ? 0 : matrix[0].size(), x = 0, y = 0;
        if (m == 0)
            return {};
        vector<int> dir_x = {0, 1, 0, -1}, dir_y = {1, 0, -1, 0}, ret;
        int dir = 0, i = 0, j = 0, k = m * n;
        while (k > 0) {
            ret.push_back(matrix[i][j]);
            if (j + dir_y[dir] >= n) {
                ++dir;
                ++x;
            } else if (j + dir_y[dir] < y) {
                ++dir;
                --m;
            } else if (i + dir_x[dir] >= m) {
                ++dir;
                --n;
            } else if (i + dir_x[dir] < x) {
                dir = 0;
                ++y;
            }
            i += dir_x[dir];
            j += dir_y[dir];
            --k;
        }
        return ret;
    }
};