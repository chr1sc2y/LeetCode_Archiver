class Solution:
    def numTrees(self, n: int) -> int:
        trees = [0 for _ in range(n + 1)]
        trees[0], trees[1] = 1, 1,
        for i in range(2, n + 1):
            for j in range(1, i + 1):
                trees[i] += trees[j - 1] * trees[i - j]
        return trees[n]
