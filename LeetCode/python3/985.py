class Solution:
    def sumEvenAfterQueries(self, A: 'List[int]', queries: 'List[List[int]]') -> 'List[int]':
        m = sum(a for a in A if a % 2 == 0)
        ret = []
        for q in queries:
            m -= A[q[1]] if A[q[1]] % 2 == 0 else 0
            A[q[1]] += q[0]
            m += A[q[1]] if A[q[1]] % 2 == 0 else 0
            ret.append(m)
        return ret
