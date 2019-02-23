class Solution:
    def intervalIntersection(self, A: 'List[Interval]', B: 'List[Interval]') -> 'List[Interval]':
        ret = []
        i, j, m, n = 0, 0, len(A), len(B)
        while i < m and j < n:
            if A[i].start > B[j].end:
                j += 1
            elif A[i].end < B[j].start:
                i += 1
            else:
                ret.append(Interval(max(A[i].start, B[j].start), min(A[i].end, B[j].end)))
                if A[i].end < B[j].end:
                    i += 1
                else:
                    j += 1
        return ret
