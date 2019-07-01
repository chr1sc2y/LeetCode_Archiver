class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        m, n = len(p), len(s)
        if m > n:
            return []
        dict, supp = {}, {}
        ret = []
        for i in range(m):
            supp[p[i]] = 1 if p[i] not in supp else supp[p[i]] + 1
        for i in range(m - 1):
            dict[s[i]] = 1 if s[i] not in dict else dict[s[i]] + 1
        for i in range(m - 1, n):
            dict[s[i]] = 1 if s[i] not in dict else dict[s[i]] + 1
            if dict == supp:
                ret.append(i - m + 1)
            dict[s[i - m + 1]] -= 1
            if dict[s[i - m + 1]] == 0:
                del dict[s[i - m + 1]]
        return ret