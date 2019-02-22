class Solution {
public:
    int orangesRotting(vector<vector<int>> &grid) {
        vector<int> dir_x = {-1, 0, 1, 0};
        vector<int> dir_y = {0, -1, 0, 1};
        int m = grid.size(), n = m != 0 ? grid[0].size() : 0, fresh = 0;
        if (m == 0)
            return 0;
        vector<int> decayed;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1)
                    ++fresh;
                else if (grid[i][j] == 2) {
                    decayed.push_back(i);
                    decayed.push_back(j);
                }
            }
        }
        if (fresh == 0)
            return 0;
        int k = 0;
        while (!decayed.empty()) {
            int size = decayed.size() / 2;
            for (int i = 0; i < size; ++i) {
                auto x = decayed[0];
                auto y = decayed[1];
                int t = 0;
                for (int j = 0; j < 4; ++j) {
                    if (x + dir_x[j] >= 0 && x + dir_x[j] < m && y + dir_y[j] >= 0 && y + dir_y[j] < n &&
                        grid[x + dir_x[j]][y + dir_y[j]] == 1) {
                        grid[x + dir_x[j]][y + dir_y[j]] = 2;
                        ++t;
                        decayed.push_back(x + dir_x[j]);
                        decayed.push_back(y + dir_y[j]);
                    }
                }
                decayed.erase(decayed.begin(), decayed.begin() + 2);
                fresh -= t;
            }
            if (decayed.empty() && fresh == 0)
                break;
            ++k;
        }
        return fresh > 0 ? -1 : k;
    }
};