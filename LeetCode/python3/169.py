import collections


class Solution:
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d = collections.Counter(nums)
        return max(d.keys(), key=d.get)
