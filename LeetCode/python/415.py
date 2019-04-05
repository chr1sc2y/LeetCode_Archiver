class Solution(object):
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        m, n = len(num1), len(num2)
        longer, shorter = list(num1), list(num2)
        if m < n:
            longer, shorter = shorter, longer
            m, n = n, m
        i, carry = 1, 0
        while n - i >= 0:
            sum = ord(longer[m - i]) - ord('0') + ord(shorter[n - i]) - ord('0') + carry
            carry = sum // 10
            sum %= 10
            longer[m - i] = str(sum)
            i += 1
        while carry:
            if m - i < 0:
                longer = ['1'] + longer
                break
            sum = ord(longer[m - i]) - ord('0') + carry
            carry = sum // 10
            sum %= 10
            longer[m - i] = str(sum)
            i += 1
        return "".join(longer)
