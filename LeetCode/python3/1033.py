class Solution:
    def numMovesStones(self, a: int, b: int, c: int) -> List[int]:
        res = [0, 0]
        if a > b:
            a, b = b, a
        if a > c:
            a, c = c, a
        if b > c:
            b, c = c, b
        if a == b - 1:
            res[0] = 0 if b == c - 1 else 1
            res[1] = c - b - 1
        elif c == b + 1:
            res[0] = 1
            res[1] = b - a - 1
        else:
            res[0] = 1 if b == a + 2 or c == b + 2 else 2
            res[1] = c - b - 1 + b - a - 1
        return res
