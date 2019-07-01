class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        return [sum(nums) - sum(set(nums)), sum(range(1, len(nums) + 1)) - sum(set(nums))]
