class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ret = []
        self.Backtrack(nums, [], ret, 0)
        return ret

    def Backtrack(self, nums, curr, ret, k):
        ret.append([c for c in curr])
        if k == len(nums):
            return curr
        for i in range(k, len(nums)):
            curr.append(nums[i])
            curr = self.Backtrack(nums, curr, ret, i + 1)
            curr = curr[:-1]
        return curr
