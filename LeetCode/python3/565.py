class Solution:
    def arrayNesting(self, nums: List[int]) -> int:
        longest = 1
        for i in range(len(nums)):
            s = set()
            count = 0
            j = i
            while nums[j] >= 0 and nums[j] != j:
                s.add(nums[j])
                nums[j] *= -1
                j = -nums[j]
                count += 1
            longest = max(longest, count)
        return longest
