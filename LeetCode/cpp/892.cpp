class Solution {
public:
    int surfaceArea(vector<vector<int>> &grid) {
        int x = grid.size(), y = x ? grid[0].size() : 0;
        if (x == 0)
            return 0;
        int total = 0, area = 0;
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                if (grid[i][j] == 0)
                    continue;
                area = 2 + 4 * grid[i][j];
                if (i - 1 >= 0)
                    area -= min(grid[i - 1][j], grid[i][j]);
                if (j - 1 >= 0)
                    area -= min(grid[i][j - 1], grid[i][j]);
                if (i + 1 < x)
                    area -= min(grid[i + 1][j], grid[i][j]);
                if (j + 1 < y)
                    area -= min(grid[i][j + 1], grid[i][j]);
                total += area;
            }
        }
        return total;
    }
};