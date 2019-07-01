class Solution {
public:
    vector<int> dir_x = {0, -1, 0, 1};
    vector<int> dir_y = {-1, 0, 1, 0};
    vector<vector<int>> island, grid;
    int size_row, size_col;

    int maxAreaOfIsland(vector<vector<int>> &grid) {
        size_row = grid.size();
        if (size_row == 0)
            return 0;
        this->grid = grid;
        int max_Area = 0;
        size_col = grid[0].size();
        island = vector<vector<int>>(size_row, vector<int>(size_col, 0));
        for (int i = 0; i < size_row; ++i) {
            for (int j = 0; j < size_col; ++j) {
                if (grid[i][j] == 1 && island[i][j] == 0) {
                    int area = 0;
                    stack<vector<int>> sub;
                    sub.push(vector<int>{i, j});
                    island[i][j] = 1;
                    while (!sub.empty()) {
                        vector<int> temp = sub.top();
                        sub.pop();
                        ++area;
                        for (int k = 0; k < 4; ++k) {
                            int &&x = temp[0] + dir_x[k], &&y = temp[1] + dir_y[k];
                            if (x >= 0 && x < size_row && y >= 0 && y < size_col &&
                                grid[x][y] != 0 && island[x][y] == 0) {
                                island[x][y] = 1;
                                sub.push(vector<int>{x, y});
                            }
                        }
                    }
                    max_Area = max(max_Area, area);
                }
            }
        }
        return max_Area;
    }
};
