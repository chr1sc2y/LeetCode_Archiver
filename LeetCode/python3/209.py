class Solution:
    def minSubArrayLen(self, s, nums):
        """
        :type s: int
        :type nums: List[int]
        :rtype: int
        """
        i, j, size, sum, min_len = 0, 0, len(nums), 0, len(nums)
        if size == 0:
            return 0
        while j < size:
            sum += nums[j]
            while sum >= s:
                sum -= nums[i]
                i += 1
                min_len = min(min_len, j - i + 2)
            j += 1
        return min_len if i != 0 else 0
