class Solution:
    def clumsy(self, N: int) -> int:
        if N <= 2:
            return N
        sum = N * (N - 1) // (N - 2)
        N -= 3
        while N > 0:
            sum += N
            temp = 0
            if N - 1 > 0:
                temp = N - 1
                if N - 2 > 0:
                    temp *= N - 2
                    if N - 3 > 0:
                        temp //= N - 3
            sum -= temp
            N -= 4
        return sum
