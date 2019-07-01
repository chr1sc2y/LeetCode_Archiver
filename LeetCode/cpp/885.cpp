class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        int dir_x[] = {0, 1, 0, -1};
        int dir_y[] = {1, 0, -1, 0};
        int total = R * C, x = r0, y = c0, status = 0;
        vector<vector<bool>> visited(R, vector<bool>(C, false));
        vector<vector<int>> ret(total, vector<int>(2, 0));
        ret[0][0] = x, ret[0][1] = y, visited[x][y] = true, ++y;
        int k = 1;
        while (k < total) {
            while (status == 0 && y < C) {
                Increment(k, x, y, R, C, visited, ret);
                if ((y >= 0 && y < C && x + 1 < R && !visited[x + 1][y]) || x + 1 >= R ){
                    ++x;
                    status = 1;
                    break;
                }
                ++y;
            }
            if (y >= C)
                status = 1;
            while (status == 1 && x < R) {
                Increment(k, x, y, R, C, visited, ret);
                if ((x >= 0 && x < R && y - 1 >= 0 && !visited[x][y - 1]) || y - 1 < 0) {
                    --y;
                    status = 2;
                    break;
                }
                ++x;
            }
            if (x >= R)
                status = 2;
            while (status == 2 && y >= 0) {
                Increment(k, x, y, R, C, visited, ret);
                if ((y >= 0 && y < C && x - 1 >= 0 && !visited[x - 1][y]) || x - 1 < 0 ){
                    --x;
                    status = 3;
                    break;
                }
                --y;
            }
            if (y < 0)
                status = 3;
            while (status == 3 && x >= 0) {
                Increment(k, x, y, R, C, visited, ret);
                if ((x >= 0 && x < R && y + 1 < C && !visited[x][y + 1]) || y + 1 >= C) {
                    ++y;
                    status = 0;
                    break;
                }
                --x;
            }
            if (x < 0)
                status = 0;
        }
        return ret;
    }

    void Increment(int &k, int &x, int &y, const int &R, const int &C, vector<vector<bool>> &visited,
                   vector<vector<int>> &ret) {
        if (x >= 0 && x < R && y >= 0 && y < C && !visited[x][y]) {
            ret[k][0] = x, ret[k][1] = y;
            ++k;
            visited[x][y] = true;
        }
    }
};
