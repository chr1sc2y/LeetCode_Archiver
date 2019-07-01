class Solution {
public:
	int numMagicSquaresInside(vector<vector<int>>& grid) {
		int total = 0;
		if (grid.size() < 3 || grid[0].size() < 3)
			return 0;
		for (int i = 0; i < grid.size() - 2; ++i) {
			for (int j = 0; j < grid[i].size() - 2; ++j) {
				if (grid[i][j] >= 10 || grid[i][j + 1] >= 10 || grid[i][j + 2] >= 10 || grid[i + 1][j] >= 10 || grid[i + 1][j + 1] >= 10 || grid[i + 1][j + 2] >= 10 || grid[i + 2][j] >= 10 || grid[i + 2][j + 1] >= 10 || grid[i + 2][j + 2] >= 10)
					continue;
				if (grid[i][j] <= 0 || grid[i][j + 1] <= 0 || grid[i][j + 2] <= 0 || grid[i + 1][j] <= 0 || grid[i + 1][j + 1] <= 0 || grid[i + 1][j + 2] <= 0 || grid[i + 2][j] <= 0 || grid[i + 2][j + 1] <= 0 || grid[i + 2][j + 2] <= 0)
					continue;
				int sum = grid[i][j] + grid[i + 1][j] + grid[i + 2][j];
				int num = grid[i][j + 1] + grid[i + 1][j + 1] + grid[i + 2][j + 1];
				if (num != sum) continue;
				num = grid[i][j + 2] + grid[i + 1][j + 2] + grid[i + 2][j + 2];
				if (num != sum) continue;
				num = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
				if (num != sum) continue;
				num = grid[i + 1][j] + grid[i + 1][j + 1] + grid[i + 1][j + 2];
				if (num != sum) continue;
				num = grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2];
				if (num != sum) continue;
				num = grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2];
				if (num != sum) continue;
				num = grid[i][j + 2] + grid[i + 1][j + 1] + grid[i + 2][j];
				if (num != sum) continue;
				++total;
			}
		}
		return total;
	}
};
