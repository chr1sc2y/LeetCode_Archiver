class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &M) {
        int n = M.size();
        if (n == 0)
            return M;
        int m = M[0].size();
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int count = 0;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < m) {
                            image[i][j] += M[i + x][j + y];
                            ++count;
                        }
                    }
                }
                image[i][j] /= count;
            }
        }
        return image;
    }
};
