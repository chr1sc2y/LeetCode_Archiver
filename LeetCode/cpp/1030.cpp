class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        int dir[4][2] = {{0,  1}, {1,  0}, {0,  -1}, {-1, 0}};
        vector<vector<bool>> visited(R, vector<bool>(C, false));
        vector<vector<int>> res;
        queue<vector<int>> q;
        q.push(vector<int>{r0, c0});
        visited[r0][c0] = true;
        while (!q.empty()) {
            vector<int> current = q.front();
            q.pop();
            res.push_back(current);
            for (auto d:dir) {
                int x = current[0] + d[0], y = current[1] + d[1];
                if (x >= 0 && x < R && y >= 0 && y < C && !visited[x][y]) {
                    visited[x][y] = true;
                    q.push(vector<int>{x, y});
                }
            }
        }
        return res;
    }
};
