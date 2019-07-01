class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        res = []
        i, n = 0, len(popped)
        for p in pushed:
            res.append(p)
            while res and i < n and res[-1] == popped[i]:
                i += 1
                res.pop()
        return i == n