class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
        int n = obstacleGrid.size();
        if (n == 0)
            return 0;
        int m = obstacleGrid[0].size();
        if (obstacleGrid[n - 1][m - 1] == 1 || obstacleGrid[0][0] == 1)
            return 0;
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int sum = 0;
        dp[0][0] = 1;
        for (int i = 1; i < n; ++i)
            if (obstacleGrid[i][0] == 0)
                dp[i][0] = dp[i - 1][0];
        for (int j = 1; j < m; ++j)
            if (obstacleGrid[0][j] == 0)
                dp[0][j] = dp[0][j - 1];
        for (int i = 1; i < n; ++i)
            for (int j = 1; j < m; ++j)
                if (obstacleGrid[i][j] == 0)
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        return dp[n - 1][m - 1];
    }
};