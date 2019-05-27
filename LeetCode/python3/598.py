class Solution:
    def maxCount(self, m: int, n: int, ops: List[List[int]]) -> int:
        for o in ops:
            m = min(m, o[0])
            n = min(n, o[1])
        return m * n