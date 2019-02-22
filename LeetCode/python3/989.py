class Solution:
    def addToArrayForm(self, A: 'List[int]', K: 'int') -> 'List[int]':
        rem = 0
        for i in range(len(A) - 1, -1, -1):
            rem += A[i] + K % 10
            A[i] = rem % 10
            rem //= 10
            K //= 10
        while K > 0:
            rem += K % 10
            A = [rem % 10] + A
            rem //= 10
            K //= 10
        if rem:
            A = [1] + A
        return A