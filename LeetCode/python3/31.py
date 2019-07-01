import sys


class Solution:
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        m, size = len(nums) - 2, len(nums)
        while m >= 0:
            if nums[m] < nums[m + 1]:
                break
            m -= 1
        if(m >= 0):
            upper, index = sys.maxsize, 0
            for i in range(m + 1, size):
                if nums[i] > nums[m] and upper > nums[i]:
                    upper = nums[i]
                    index = i
            nums[m], nums[index] = nums[index], nums[m]
        nums[m + 1: size] = sorted(nums[m + 1: size])
