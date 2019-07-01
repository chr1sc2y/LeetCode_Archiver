class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        pos = 0
        for i in range(1, len(nums)):
            if nums[i] < nums[i - 1]:
                if pos != 0:
                    return False
                pos = i
        return pos == 0 or pos == 1 or pos == len(nums) - 1 or nums[pos - 1] <= nums[pos + 1] or nums[pos - 2] <= nums[pos]
