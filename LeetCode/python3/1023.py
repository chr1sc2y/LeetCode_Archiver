class Solution:
    def camelMatch(self, queries: List[str], pattern: str) -> List[bool]:
        n, ret = len(pattern), []
        for query in queries:
            i, res = 0, True
            for q in query:
                if q <= 'Z':
                    if i >= n or q != pattern[i]:
                        res = False
                        break
                    i += 1
                elif i < n and q == pattern[i]:
                    i += 1
            ret.append(res and i == n)
        return ret
