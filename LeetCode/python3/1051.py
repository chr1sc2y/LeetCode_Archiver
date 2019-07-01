class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        res, h = 0, sorted(heights)
        for i in range(len(h)):
            if h[i] != heights[i]:
                res += 1
        return res