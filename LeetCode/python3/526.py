class Solution:
    def countArrangement(self, N: int) -> int:
        visited = [False for i in range(N)]
        self.count = 0

        def Count(k, visited):
            if k == N:
                self.count += 1
            for i in range(N):
                if not visited[i] and ((k + 1) % (i + 1) == 0 or (i + 1) % (k + 1) == 0):
                    visited[i] = True
                    Count(k + 1, visited)
                    visited[i] = False

        Count(0, visited)
        return self.count
