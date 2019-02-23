class Solution {
public:
    int islandPerimeter(vector<vector<int>> &grid) {
        auto size = grid.size();
        vector<vector<int>> visited;
        for (int i = 0; i < size; ++i)
            visited.push_back(vector<int>(grid[i].size(), 0));
        for (int i = 0; i < size; ++i)
            for (int j = 0; j < grid[i].size(); ++j)
                if (grid[i][j]) {
                    helper(i, j, visited, grid);
                    break;
                }
        return num;
    }

    void helper(int &i, int &j, vector<vector<int>> &visited, vector<vector<int>> &grid) {
        if (visited[i][j] == 1)
            return;
        visited[i][j] = 1;
        int surrounded = 0;
        for (int a = 0; a < 4; ++a) {
            int tempX = i + dirx[a];
            int tempY = j + diry[a];
            if (tempX >= 0 && tempX < grid.size() && tempY >= 0 && tempY < grid[i].size() && grid[tempX][tempY] == 1) {
                ++surrounded;
                helper(tempX, tempY, visited, grid);
            }
        }
        num += (4 - surrounded);
    }

private:
    int num = 0;
    int dirx[4] = {-1, 0, 0, 1};
    int diry[4] = {0, 1, -1, 0};
};
