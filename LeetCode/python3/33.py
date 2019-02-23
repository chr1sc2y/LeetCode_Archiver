class Solution:
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        i, j = 0, len(nums) - 1
        if j < 0:
            return -1
        while i < j:
            mid = i + (j - i) // 2
            if nums[mid] < nums[i] and nums[mid] < nums[j]:
                j = mid
            elif nums[mid] > nums[i] and nums[mid] > nums[j]:
                i = mid + 1
            else:
                break
        i = j if nums[i] > nums[j] else i
        start, end = 0, i - 1
        if i == 0 or target < nums[0]:
            start, end = i, len(nums) - 1
        while start <= end:
            mid = start + (end - start) // 2
            if nums[mid] < target:
                start = mid + 1
            elif nums[mid] > target:
                end = mid - 1
            else:
                return mid
        return -1
