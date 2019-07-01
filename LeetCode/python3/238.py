class Solution:
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        temp = 1
        ret = [1] * len(nums)
        for i in range(len(nums) - 1):
            ret[i+1] = ret[i] * nums[i]
        for i in range(len(nums)-2, -1, -1):
            temp *= nums[i + 1]
            ret[i] *= temp
        return ret
