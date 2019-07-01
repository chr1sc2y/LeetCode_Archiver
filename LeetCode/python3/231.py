class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n <= 0:
            return False
        while n & 1 == 0:
            n >>= 1
        return n == 1
