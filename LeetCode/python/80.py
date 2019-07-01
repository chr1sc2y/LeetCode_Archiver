class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i, j, n = 0, 0, len(nums)
        while j < n:
            k = j
            nums[i] = nums[j]
            i += 1
            j += 1
            if j >= n:
                break
            while j < n and nums[j] == nums[j - 1]:
                j += 1
            if j == k + 1:
                continue
            nums[i] = nums[j - 1]
            i += 1
        return i
