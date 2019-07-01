func min(i, j int) int {
	if i < j {
		return i
	}
	return j
}

func max(i, j int) int {
	if i > j {
		return i
	}
	return j
}

func maxIncreaseKeepingSkyline(grid [][]int) int {
	m := len(grid)
	if m == 0 {
		return 0
	}
	n := len(grid[0])
	row := make([]int, m)
	col := make([]int, n)
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			row[i] = max(row[i], grid[i][j])
			col[j] = max(col[j], grid[i][j])
		}
	}
	total := 0
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			highest := min(row[i], col[j]);
			total += max(0, highest-grid[i][j]);
		}
	}
	return total
}
