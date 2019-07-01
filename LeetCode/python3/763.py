class Solution:
    def partitionLabels(self, S: str) -> List[int]:
        start, end, n, pos, res = 0, 0, len(S), [0 for _ in range(26)], []
        for i in range(n):
            pos[ord(S[i]) - ord('a')] = i
        for i in range(n):
            end = max(end, pos[ord(S[i]) - ord('a')])
            if end == i:
                res.append(end - start + 1)
                start = end + 1
                end = start
        return res