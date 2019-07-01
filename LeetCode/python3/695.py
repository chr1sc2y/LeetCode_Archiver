class Solution:
    def maxAreaOfIsland(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        dir_x = [0, 0, 1, -1]
        dir_y = [-1, 1, 0, 0]

        def helper(i, j):
            if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[i]) or (i, j) in visited or grid[i][j] == 0:
                return 0
            visited.add((i, j))
            area = 1
            for k in range(4):
                x, y = i + dir_x[k], j + dir_y[k]
                area += helper(x, y)
            return area

        visited = set()
        maxArea = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1 and (i,j) not in visited:
                    maxArea = max(maxArea, helper(i, j))
        return maxArea

