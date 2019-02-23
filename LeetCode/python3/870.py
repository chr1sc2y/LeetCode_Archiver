import collections
class Solution:
    def advantageCount(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        A.sort()
        d = collections.defaultdict(list)
        for b in sorted(B)[::-1]:
            if b < A[-1]:
                d[b].append(A.pop())
            else:
                d[b].append(A[0])
                A.remove(A[0])
        return [d[b].pop() for b in B]