class Solution {
    int dir[4][2] = {{0,  1},
                     {1,  0},
                     {0,  -1},
                     {-1, 0}};
    int m, n;
public:
    vector<vector<int>> colorBorder(vector<vector<int>> &grid, int r0, int c0, int color) {
        m = grid.size(), n = grid[0].size();
        vector<vector<int>> res = grid;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        visited[r0][c0] = true;
        DFS(grid, res, visited, r0, c0, color);
        return res;
    }

    bool DFS(vector<vector<int>> &grid, vector<vector<int>> &res, vector<vector<bool>> &visited, int r0, int c0,
             const int &color) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            int x = r0 + dir[i][0];
            int y = c0 + dir[i][1];
            if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == grid[r0][c0]) {
                ++count;
                if (!visited[x][y]) {
                    visited[x][y] = true;
                    DFS(grid, res, visited, x, y, color);
                }
            }
        }
        if (count < 4)
            res[r0][c0] = color;
        return true;
    }
};
