class Solution:
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        start, end = 0, len(nums) - 1
        while start < end - 1:
            mid = start + (end - start) // 2
            if nums[mid] < nums[start] and nums[mid] < nums[end]:
                end = mid
            elif nums[mid] > nums[start] and nums[mid] > nums[end]:
                start = mid
            else:
                return nums[0]
        return min(nums[start], nums[end])