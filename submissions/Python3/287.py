class Solution:
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        size = len(nums)
        if size == 0:
            return 0
        i, j = nums[0], nums[0]
        while True:
            i = nums[i]
            j = nums[nums[j]]
            if i == j:
                break
        j = nums[0]
        while i != j:
            i = nums[i]
            j = nums[j]
        return i
