class Solution:
    def triangleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        size, total = len(nums), 0
        for i in range(2, size):
            if nums[i] == 0:
                continue
            j, k = 0, i - 1
            while j < k:
                if nums[i] + nums[j] > nums[k] and nums[i] - nums[j] < nums[k]:
                    total += k - j
                    k -= 1
                else:
                    j += 1
        return total