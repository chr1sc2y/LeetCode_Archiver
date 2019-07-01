class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 or (x != 0 and x % 10 == 0):
            return False
        a, b = x, 0
        while a > b:
            b = b * 10 + a % 10
            a //= 10
        return a == b or a == b // 10
