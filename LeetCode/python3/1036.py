class Solution:
    dir = [[0, 1], [1, 0], [0, -1], [-1, 0]]

    def isEscapePossible(self, blocked: List[List[int]], source: List[int], target: List[int]) -> bool:
        self.block = set(tuple(b) for b in blocked)
        return self.BFS(source, target) and self.BFS(target, source)

    def BFS(self, source: List[int], target: List[int]):
        que, visited = [(source[0], source[1])], {tuple(source)}
        i, j = 0, 0
        while i < len(que):
            for d in self.dir:
                x, y = que[i][0] + d[0], que[i][1] + d[1]
                if x == target[0] and y == target[1]:
                    return True
                if 0 <= x < 1000000 and 0 <= y < 1000000 and (x, y) not in self.block and (x, y) not in visited:
                    que.append((x, y))
                    visited.add((x, y))
                    j += 1
                if j >= 20000:
                    return True
            i += 1
        return False
