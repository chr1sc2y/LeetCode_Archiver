class Solution {
    int dir_x[4] = {-1, 0, 1, 0};
    int dir_y[4] = {0, -1, 0, 1};
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
        if (image.size() == 0 || sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size())
            return image;
        int oldColor = image[sr][sc];
        if (oldColor != newColor)
            DFS(image, sr, sc, oldColor, newColor);
        return image;
    }

    void DFS(vector<vector<int>> &image, int x, int y, int &o, int &n) {
        image[x][y] = n;
        for (int k = 0; k < 4; ++k) {
            int i = x + dir_x[k], j = y + dir_y[k];
            if (i >= 0 && i < image.size() && j >= 0 && j < image[0].size() && image[i][j] == o)
                DFS(image, i, j, o, n);
        }
    }
};