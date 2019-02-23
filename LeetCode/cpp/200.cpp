class Solution {
    vector<vector<char>> g;
    int dir_x[4] = {-1, 0, 1, 0};
    int dir_y[4] = {0, -1, 0, 1};
public:
    int numIslands(vector<vector<char>> &grid) {
        int m = grid.size(), n = m != 0 ? grid[0].size() : 0;
        if (m == 0)
            return 0;
        int num = 0;
        g = grid;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (g[i][j] == '1') {
                    FindRoot(i, j);
                    ++num;
                }
            }
        }
        return num;
    }

    void FindRoot(int i, int j) {
        g[i][j] = '2';
        for (int l = 0; l < 4; ++l) {
            int x = i + dir_x[l], y = j + dir_y[l];
            if (x >= 0 && y >= 0 && x < g.size() && y < g[0].size() && g[x][y] == '1') {
                FindRoot(x, y);
            }
        }
    }
};