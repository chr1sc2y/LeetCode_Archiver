class Solution {
    int dir_x[4] = {0, 1, 0, -1};
    int dir_y[4] = {1, 0, -1, 0};

    void DFS(vector<vector<int>> &A, int i, int j) {
        A[i][j] = 2;
        for (int k = 0; k < 4; ++k) {
            int x = i + dir_x[k];
            int y = j + dir_y[k];
            if (x >= 0 && x < A.size() && y >= 0 && y < A[0].size() && A[x][y] == 1)
                DFS(A, x, y);
        }
    }

public:
    int numEnclaves(vector<vector<int>> &A) {
        int m = A.size(), n = m != 0 ? A[0].size() : 0;
        if (m == 0)
            return 0;
        for (int i = 0; i < m; ++i) {
            if (A[i][0] == 1)
                DFS(A, i, 0);
            if (A[i][n - 1] == 1)
                DFS(A, i, n - 1);
        }
        for (int j = 1; j < n - 1; ++j) {
            if (A[0][j] == 1)
                DFS(A, 0, j);
            if (A[m - 1][j] == 1)
                DFS(A, m - 1, j);
        }
        int total = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j)
                total += (A[i][j] == 1);
        }
        return total;
    }
};
