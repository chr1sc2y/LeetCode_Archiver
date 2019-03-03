class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        p1, p2 = nums[0], nums[nums[0]]
        while nums[p1] != nums[p2]:
            p1 = nums[p1]
            p2 = nums[nums[p2]]
        p2 = 0
        while nums[p1] != nums[p2]:
            p1 = nums[p1]
            p2 = nums[p2]
        return nums[p1]
