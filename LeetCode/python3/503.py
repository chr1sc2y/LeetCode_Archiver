class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        stack = nums[::-1]
        ret = [-1 for i in range(len(nums))]
        for i in range(len(nums) - 1, -1, -1):
            while stack and stack[-1] <= nums[i]:
                stack.pop()
            if stack:
                ret[i] = stack[-1]
            stack.append(nums[i])
        return ret
