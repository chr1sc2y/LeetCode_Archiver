class Solution:
    def bitwiseComplement(self, N: int) -> int:
        if N == 0:
            return 1
        m, res, = 1, 0
        while N:
            res += m * (N % 2 ^ 1)
            m <<= 1
            N >>= 1
        return res
