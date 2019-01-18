class Solution:
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        ret, minAbs = 0, sys.maxsize
        for i in range(len(nums)-2):
            j, k = i + 1, len(nums) - 1
            minus = target - nums[i]
            while j < k:
                sum = nums[j] + nums[k]
                abso = abs(minus - sum)
                if minAbs > abso:
                    minAbs = abso
                    ret = sum + nums[i]
                if minAbs == 0:
                    return ret
                if sum > minus:
                    k -= 1
                else:
                    j += 1
        return ret
