class Solution:
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        size = len(nums)
        seq = [nums[0]] if size > 0 else []
        for i in range(1, size):
            x, y = 0, len(seq)
            while(x < y):
                mid = x + (y-x) // 2
                if nums[i] > seq[mid]:
                    x = mid + 1
                else:
                    y = mid
            if y == len(seq):
                seq.append(nums[i])
            else:
                seq[y] = nums[i]
        return len(seq)
