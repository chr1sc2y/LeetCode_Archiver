class Solution:
    def arrayNesting(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxLen, numMinus = 0, 0
        for i in range(len(nums)):
            if nums[i] != -1:
                curLen, j = 0, i
                while nums[j] != -1:
                    nums[j], j = -1, nums[j]
                    curLen += 1
                    numMinus += 1
                maxLen = max(maxLen, curLen)
        return maxLen