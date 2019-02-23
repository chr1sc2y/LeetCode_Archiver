class Solution:
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        size = len(nums)
        if size < 4:
            return []
        nums.sort()
        ret = []
        nums_set = set()
        for i in range(size - 3):
            for j in range(i + 1, size - 2):
                k, l = j + 1, size - 1
                while k < l:
                    sum = nums[i] + nums[j] + nums[k] + nums[l]
                    if sum > target:
                        l -= 1
                    elif sum < target:
                        k += 1
                    else:
                        if [nums[i], nums[j], nums[k], nums[l]] not in ret:
                            ret.append([nums[i], nums[j], nums[k], nums[l]])
                        k += 1
                        l -= 1
        return ret
