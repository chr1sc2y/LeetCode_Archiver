class Solution:
    def camelMatch(self, queries: List[str], pattern: str) -> List[bool]:
        n, m, ret = len(queries), len(pattern), []
        for query in queries:
            j, flag = 0, True
            for i in range(len(query)):
                if query[i] <= 'Z':
                    if j >= m or query[i] != pattern[j]:
                        flag = False
                        break
                    j += 1
                elif j < m and query[i] == pattern[j]:
                    j += 1
            ret.append(flag and j == m)
        return ret
