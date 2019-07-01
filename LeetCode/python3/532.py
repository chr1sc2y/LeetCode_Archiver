class Solution:
    def findPairs(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        counts = {}
        for n in nums:
            if n not in counts:
                counts[n] = 1
            else:
                counts[n] += 1
        ret = 0
        for c in counts:
            if k == 0 and counts[c] > 1:
                ret += 1
            elif k > 0 and c - k in counts:
                ret += 1
        return ret