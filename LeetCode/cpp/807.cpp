class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid) {
        int m = grid.size(), n = m == 0 ? 0 : grid[0].size();
        if (m == 0)
            return 0;
        vector<int> row(m, 0), col(n, 0);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }
        int total = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int highest = min(row[i], col[j]);
                total += max(0, highest - grid[i][j]);
            }
        }
        return total;
    }
};