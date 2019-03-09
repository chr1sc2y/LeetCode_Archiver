class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ret = []
        count = collections.Counter(nums)
        self.Backtrack([m for m in set(nums)], [], ret, 0, count)
        return ret

    def Backtrack(self, nums, curr, ret, k, count):
        ret.append([c for c in curr])
        if k == len(nums):
            return curr
        for i in range(k, len(nums)):
            temp = []
            for j in range(count[nums[i]]):
                temp.append(nums[i])
                curr += temp
                curr = self.Backtrack(nums, curr, ret, i + 1, count)
                curr = curr[:-len(temp)]
        return curr