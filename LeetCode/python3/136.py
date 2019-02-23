class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        k = 0
        for n in nums:
            k ^= n
        return k