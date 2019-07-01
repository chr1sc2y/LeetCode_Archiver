class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        while num > 9:
            temp, sum = num, 0
            while temp > 0:
                sum += temp % 10
                temp //= 10
            num = sum
        return num
