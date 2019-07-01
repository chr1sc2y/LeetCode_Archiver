class Solution:
    def titleToNumber(self, s: str) -> int:
        res, base = 0, 1
        for i in range(len(s) - 1, -1, -1):
            res += (ord(s[i]) - ord('A') + 1) * base
            base *= 26
        return res