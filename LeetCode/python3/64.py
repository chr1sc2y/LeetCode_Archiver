class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        dp = [[sys.maxsize for j in range(len(grid[i]))] for i in range(len(grid))]
        dp[0][0] = grid[0][0]
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                dp[i][j] = min(dp[i][j - 1] + grid[i][j] if j - 1 >= 0 else dp[i][j],
                               dp[i - 1][j] + grid[i][j] if i - 1 >= 0 else dp[i][j])
        return dp[-1][-1]
