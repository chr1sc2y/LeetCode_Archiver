class Solution:
    def addDigits(self, num: int) -> int:
        while num > 9:
            temp, sum = num, 0
            while temp > 0:
                sum += temp % 10
                temp //= 10
            num = sum
        return num
