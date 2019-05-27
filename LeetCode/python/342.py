class Solution(object):
    def isPowerOfFour(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num <= 0:
            return False
        while num > 1:
            if num & 1 or num & 2:
                return False
            num >>= 2
        return True