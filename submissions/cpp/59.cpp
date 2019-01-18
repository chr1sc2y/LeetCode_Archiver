class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ret(n, vector<int>(n, 0));
        int N = pow(n, 2), m = 1;
        int left = 0, right = n - 1, top = 0, down = n - 1;
        while (top <= down && left <= right) {
            for (int y = left; y <= right; ++y)
                ret[top][y] = m++;
            ++top;
            for (int x = top; x <= down; ++x)
                ret[x][right] = m++;
            --right;
            for (int y = right; y >= left; --y)
                ret[down][y] = m++;
            --down;
            for (int x = down; x >= top; --x)
                ret[x][left] = m++;
            ++left;
        }
        return ret;
    }
};
