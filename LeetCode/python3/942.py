class Solution:
    def diStringMatch(self, S: str) -> List[int]:
        S += 'E'
        l, h, n = 0, len(S) - 1, len(S)
        res = [0 for _ in range(n)]
        for i in range(n):
            if S[i] == 'I':
                res[i] = l
                l += 1
            else:
                res[i] = h
                h -= 1
        return res
