class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        self.ret = []
        self.counts = collections.Counter(candidates)
        nums = [k for k in set(sorted(candidates))]
        self.Backtrack(nums, target, [], 0)
        return self.ret

    def Backtrack(self, nums, target, combination, k):
        if target == 0:
            self.ret.append(combination)
            return combination
        for i in range(k, len(nums)):
            if target - nums[i] < 0:
                break
            temp_sum = 0
            temp_list = []
            for j in range(self.counts[nums[i]]):
                temp_sum += nums[i]
                temp_list.append(nums[i])
                if target - temp_sum < 0:
                    break
                combination += temp_list
                combination = self.Backtrack(nums, target - temp_sum, combination, i + 1)
                combination = combination[:-len(temp_list)]
        return combination
