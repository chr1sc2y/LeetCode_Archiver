class Solution:
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        hash_table = set()
        for i in nums:
            if i in hash_table:
                return True
            else:
                hash_table.add(i)
        return False