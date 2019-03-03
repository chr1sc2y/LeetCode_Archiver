class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        j, count = 0, 0
        for i in range(len(arr)):
            j = max(j, arr[i])
            if j == i:
                count += 1
        return count