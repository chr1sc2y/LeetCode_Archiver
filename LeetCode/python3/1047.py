class Solution:
    def removeDuplicates(self, S: str) -> str:
        stack = []
        for s in S:
            if not stack or stack[-1] != s:
                stack.append(s)
            else:
                stack.pop()
        return ''.join(stack)
