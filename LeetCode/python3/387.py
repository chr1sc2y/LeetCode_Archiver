class Solution:
    def firstUniqChar(self, s: str) -> int:
        res, pos = len(s), {}
        if len(s) == 0:
            return -1
        for i in range(len(s) - 1, -1, -1):
            if s[i] not in pos:
                pos[s[i]] = i
            else:
                pos[s[i]] = -1
        for _, val in pos.items():
            if val != -1:
                res = min(res, val)
        return res if res != len(s) else -1