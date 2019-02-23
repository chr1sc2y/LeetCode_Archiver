class Solution {
public:
    int projectionArea(vector<vector<int>> &grid) {
        int top = 0, front = 0, side = 0, n = grid.size(), total = 0;
        vector<int> col;
        for (int i = 0; i < n; ++i) {
            int current = grid[i][0];
            for (int j = 0; j < grid[i].size(); ++j) {
                if (col.size() <= j)
                    col.push_back(grid[i][j]);
                else
                    col[j] = max(col[j], grid[i][j]);
                current = max(current, grid[i][j]);
                top += grid[i][j] != 0;
            }
            total += current;
        }
        for (int i = 0; i < col.size(); ++i)
            total += col[i];
        total += top;
        return total;
    }
};
