class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        empty, start, ret = 0, 0, ""
        for i in range(len(S)):
            if S[i] == '(':
                empty += 1
            elif S[i] == ')':
                empty -= 1
            if empty == 0:
                ret += S[start + 1:i]
                start = i + 1
        return ret
