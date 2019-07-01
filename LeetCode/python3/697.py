class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        class Num:
            def __init__(self, i):
                self.count = 1
                self.start = i
                self.end = i

        dict = {}
        max_count = 0
        min_len = sys.maxsize
        for i in range(len(nums)):
            if nums[i] not in dict:
                dict[nums[i]] = Num(i)
            else:
                dict[nums[i]].count += 1
                dict[nums[i]].end = i
            max_count = max(max_count, dict[nums[i]].count)
        for key, value in dict.items():
            if max_count == value.count:
                min_len = min(min_len, value.end - value.start)
        return min_len + 1