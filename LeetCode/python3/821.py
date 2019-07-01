class Solution:
    def shortestToChar(self, S: str, C: str) -> List[int]:
        n, l = len(S), -len(S)
        dis = []
        for i in range(n):
            if S[i] == C:
                l = i
            dis.append(i - l)
        l = 0
        for i in range(n - 1, -1, -1):
            if S[i] == C:
                l = i
            dis[i] = min(dis[i], abs(l - i))
        return dis
