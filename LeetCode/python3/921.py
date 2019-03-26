class Solution:
    def minAddToMakeValid(self, S: str) -> int:
        parentheses = []
        for c in S:
            if c == '(':
                parentheses.append(c)
            else:
                if len(parentheses) == 0 or parentheses[-1] != '(':
                    parentheses.append(c)
                else:
                    parentheses.pop()
        return len(parentheses)
