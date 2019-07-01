class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        int m = matrix.size(), n = m == 0 ? 0 : matrix[0].size();
        if (m == 0)
            return false;
        int i = m - 1, j = 0;
        while (j < n && i >= 0) {
            if (matrix[i][j] > target)
                --i;
            else if (matrix[i][j] < target)
                ++j;
            else
                return true;
        }
        return false;
    }
};