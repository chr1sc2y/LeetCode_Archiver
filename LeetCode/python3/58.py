class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        word = s.split()
        if not len(word):
            return 0
        return len(word[-1])