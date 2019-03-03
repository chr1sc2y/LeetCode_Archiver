class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        consecutive = 0
        ret = 0
        for i in range(len(nums) + 1):
            if i == len(nums) or nums[i] == 0:
                ret = max(ret, consecutive)
                consecutive = 0
            else:
                consecutive += 1
        return ret
