class Solution(object):
    def heightChecker(self, heights):
        """
        :type heights: List[int]
        :rtype: int
        """
        res, h = 0, sorted(heights)
        for i in range(len(h)):
            if h[i] != heights[i]:
                res += 1
        return res