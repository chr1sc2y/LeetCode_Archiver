class Solution(object):
    def removeDuplicates(self, S):
        """
        :type S: str
        :rtype: str
        """
        stack = []
        for s in S:
            if not stack or stack[-1] != s:
                stack.append(s)
            else:
                stack.pop()
        return ''.join(stack)
