class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ret = []
        self.Backtrack(sorted(candidates), target, 0, [], ret, 0)
        return ret

    def Backtrack(self, nums, target, sum, curr, ret, j):
        if sum == target:
            ret.append(curr)
            return curr
        for i in range(j, len(nums)):
            if sum + nums[i] > target:
                break
            curr.append(nums[i])
            curr = self.Backtrack(nums, target, sum + nums[i], curr, ret, i)
            curr = curr[:-1]
        return curr
