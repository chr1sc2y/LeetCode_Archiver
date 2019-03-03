class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        s.sort(reverse=True)
        g.sort(reverse=True)
        i, j = 0, 0
        while i < len(s) and j < len(g):
            if g[j] <= s[i]:
                i += 1
            j += 1
        return i