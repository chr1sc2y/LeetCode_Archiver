class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        dp = []
        for i in range(len(nums)):
            for j in range(len(dp)):
                if nums[i] <= dp[j]:
                    dp[j] = nums[i]
                    break
            else:
                dp.append(nums[i])
        return len(dp)