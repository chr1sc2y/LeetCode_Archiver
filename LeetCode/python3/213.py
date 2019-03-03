class Solution:
    def Rob(self, nums, m, n) -> int:
        prev, curr = nums[m], max(nums[m], nums[m + 1])
        for i in range(m + 2, n):
            prev, curr = curr, max(prev + nums[i], curr)
        return curr

    def rob(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        elif len(nums) <= 2:
            return max(nums)
        return max(self.Rob(nums, 0, len(nums) - 1), self.Rob(nums, 1, len(nums)))
