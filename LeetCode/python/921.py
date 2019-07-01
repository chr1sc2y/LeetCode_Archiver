class Solution(object):
    def minAddToMakeValid(self, S):
        """
        :type S: str
        :rtype: int
        """
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
