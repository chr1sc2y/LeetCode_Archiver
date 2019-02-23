class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        nonZero = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[nonZero] = nums[i]
                nonZero += 1
        for i in range(nonZero,len(nums)):
            nums[i] = 0