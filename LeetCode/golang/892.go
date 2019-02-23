func min(i, j int) int {
	if i < j {
		return i
	}
	return j
}

func surfaceArea(grid [][]int) int {
	var x int = len(grid)
	if x == 0 {
		return 0
	}
	var y int = len(grid[0])
	var total, area int = 0, 0
	for i := 0; i < x; i++ {
		for j := 0; j < y; j++ {
			if grid[i][j] == 0 {
				continue
			}
			area = 2 + 4*grid[i][j]
			if i-1 >= 0 {
				area -= min(grid[i-1][j], grid[i][j])
			}
			if (j-1 >= 0) {
				area -= min(grid[i][j-1], grid[i][j])
			}
			if (i+1 < x) {
				area -= min(grid[i+1][j], grid[i][j])
			}
			if (j+1 < y) {
				area -= min(grid[i][j+1], grid[i][j]);
			}
			total += area;
		}
	}
	return total
}
