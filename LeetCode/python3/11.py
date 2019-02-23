class Solution:
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        i, j, maxAre = 0, len(height) - 1, 0
        while i < j:
            maxAre = max(maxAre, min(height[i], height[j]) * (j-i))
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1
        return maxAre

