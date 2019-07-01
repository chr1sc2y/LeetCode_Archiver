class Solution:
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        size = len(nums)
        if size < 3:
            return max(nums)
        first = float('-inf')
        second = float('-inf')
        third = float('-inf')
        for n in nums:
            if first < n:
                third = second
                second = first
                first = n
            elif first == n:
                continue
            elif second < n:
                third = second
                second = n
            elif second == n:
                continue
            elif third < n:
                third = n
        return third if third != float('-inf') else first
