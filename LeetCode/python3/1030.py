class Solution:
    def allCellsDistOrder(self, R: int, C: int, r0: int, c0: int) -> List[List[int]]:
        queue, res, visited = [[r0, c0]], [], [[False for _ in range(C)] for _ in range(R)]
        dir = [[0, 1], [1, 0], [0, -1], [-1, 0]]
        visited[r0][c0] = True
        while queue:
            cell = queue[0]
            res.append(cell)
            queue = queue[1:]
            for d in dir:
                x, y = cell[0] + d[0], cell[1] + d[1]
                if x >= 0 and x < R and y >= 0 and y < C and not visited[x][y]:
                    visited[x][y] = True
                    queue.append([x, y])
        return res
