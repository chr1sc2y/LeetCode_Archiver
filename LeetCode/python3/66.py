class Solution:
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        extra = 1
        for i in range(len(digits)-1, -1, -1):
            digits[i] += extra
            extra = digits[i] // 10
            digits[i] %= 10
        if extra == 1:
            digits.insert(0, 1)
        return digits