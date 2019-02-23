class Solution:
    def numSubarrayBoundedMax(self, A: 'List[int]', L: 'int', R: 'int') -> 'int':
        i, m, j, res = 0, -1, 0, 0
        while j < len(A):
            if A[j] >= L and A[j] <= R:
                m = j
                res += m - i + 1
            elif A[j] < L:
                res += m - i + 1 if m != -1 else 0
            else:
                i = j + 1
                m = -1
            j += 1
        return res