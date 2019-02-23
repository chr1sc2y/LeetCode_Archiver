class Solution:
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        index = 0
        for i in range(0,len(nums)):
            if nums[i] != 0:
                nums[index] = nums[i]
                index += 1
        nums[index:] = (len(nums) - index) * [0]