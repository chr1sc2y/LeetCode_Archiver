class Solution:
    def baseNeg2(self, N: int) -> str:
        res = []
        while N:
            res.append(N & 1)
            N = -(N >> 1)
        return "".join(map(str, res[::-1] or [0]))
