class Solution:
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []
        nums.sort()
        print(nums)
        i = 0
        while i < len(nums):
            target = -nums[i]
            x, y = i + 1, len(nums) - 1
            while x < y:
                if nums[x] + nums[y] < target:
                    x += 1
                elif nums[x] + nums[y] > target:
                    y -= 1
                else:
                    X = nums[x]
                    Y = nums[y]
                    res.append([nums[i], X, Y])
                    while x < y and nums[x] == X:
                        x += 1
                    while x < y and nums[y] == Y:
                        y -= 1

            while i + 1 < len(nums) and nums[i + 1] == nums[i]:
                i += 1
            i += 1
        return res

