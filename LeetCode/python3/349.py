class Solution:
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums = []
        s = set(nums1)
        for n in nums2:
            if n in s:
                nums.append(n)
                s.remove(n)
        return nums