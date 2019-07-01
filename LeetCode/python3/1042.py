class Solution:
    def gardenNoAdj(self, N: int, paths: List[List[int]]) -> List[int]:
        adjacent, res = [[] for _ in range(N)], [0 for _ in range(N)]
        for path in paths:
            adjacent[path[0] - 1].append(path[1] - 1)
            adjacent[path[1] - 1].append(path[0] - 1)
        for i in range(N):
            used, ad = [False for _ in range(5)], adjacent[i]
            for a in ad:
                used[res[a]] = True
            for j in range(1, 5):
                if not used[j]:
                    res[i] = j
                    break
        return res
