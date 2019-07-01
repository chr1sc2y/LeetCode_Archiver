class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        square = []
        i = 0
        while i ** 2 <= c:
            square.append(i ** 2)
            i += 1
        i, j = 0, len(square) - 1
        while i <= j:
            if square[i] + square[j] == c:
                return True
            elif square[i] + square[j] < c:
                i += 1
            else:
                j -= 1
        return False
