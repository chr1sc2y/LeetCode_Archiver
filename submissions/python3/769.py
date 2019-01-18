class Solution:
    def maxChunksToSorted(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        maxChunks, til = 0, 0
        for i in range(len(arr)):
            til = max(til, arr[i])
            if til == i:
                maxChunks += 1
        return maxChunks