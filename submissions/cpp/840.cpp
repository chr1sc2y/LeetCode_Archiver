class Solution {
public:
\u0009int numMagicSquaresInside(vector<vector<int>>& grid) {
\u0009\u0009int total = 0;
\u0009\u0009if (grid.size() < 3 || grid[0].size() < 3)
\u0009\u0009\u0009return 0;
\u0009\u0009for (int i = 0; i < grid.size() - 2; ++i) {
\u0009\u0009\u0009for (int j = 0; j < grid[i].size() - 2; ++j) {
\u0009\u0009\u0009\u0009if (grid[i][j] >= 10 || grid[i][j + 1] >= 10 || grid[i][j + 2] >= 10 || grid[i + 1][j] >= 10 || grid[i + 1][j + 1] >= 10 || grid[i + 1][j + 2] >= 10 || grid[i + 2][j] >= 10 || grid[i + 2][j + 1] >= 10 || grid[i + 2][j + 2] >= 10)
\u0009\u0009\u0009\u0009\u0009continue;
\u0009\u0009\u0009\u0009if (grid[i][j] <= 0 || grid[i][j + 1] <= 0 || grid[i][j + 2] <= 0 || grid[i + 1][j] <= 0 || grid[i + 1][j + 1] <= 0 || grid[i + 1][j + 2] <= 0 || grid[i + 2][j] <= 0 || grid[i + 2][j + 1] <= 0 || grid[i + 2][j + 2] <= 0)
\u0009\u0009\u0009\u0009\u0009continue;
\u0009\u0009\u0009\u0009int sum = grid[i][j] + grid[i + 1][j] + grid[i + 2][j];
\u0009\u0009\u0009\u0009int num = grid[i][j + 1] + grid[i + 1][j + 1] + grid[i + 2][j + 1];
\u0009\u0009\u0009\u0009if (num != sum) continue;
\u0009\u0009\u0009\u0009num = grid[i][j + 2] + grid[i + 1][j + 2] + grid[i + 2][j + 2];
\u0009\u0009\u0009\u0009if (num != sum) continue;
\u0009\u0009\u0009\u0009num = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
\u0009\u0009\u0009\u0009if (num != sum) continue;
\u0009\u0009\u0009\u0009num = grid[i + 1][j] + grid[i + 1][j + 1] + grid[i + 1][j + 2];
\u0009\u0009\u0009\u0009if (num != sum) continue;
\u0009\u0009\u0009\u0009num = grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2];
\u0009\u0009\u0009\u0009if (num != sum) continue;
\u0009\u0009\u0009\u0009num = grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2];
\u0009\u0009\u0009\u0009if (num != sum) continue;
\u0009\u0009\u0009\u0009num = grid[i][j + 2] + grid[i + 1][j + 1] + grid[i + 2][j];
\u0009\u0009\u0009\u0009if (num != sum) continue;
\u0009\u0009\u0009\u0009++total;
\u0009\u0009\u0009}
\u0009\u0009}
\u0009\u0009return total;
\u0009}
};
