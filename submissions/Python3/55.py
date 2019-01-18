class Solution:
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        pos = 0
        for i in range(len(nums)-1):
            pos = max(pos, i + nums[i])
            if pos <= i:
                return False
        return True
