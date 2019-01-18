class Solution:
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        size = len(nums)
        if size < 3:
            return max(nums)
        first = float(\u0027-inf\u0027)
        second = float(\u0027-inf\u0027)
        third = float(\u0027-inf\u0027)
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
        return third if third != float(\u0027-inf\u0027) else first
