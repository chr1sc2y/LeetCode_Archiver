class Solution:
    def decodeString(self, s: str) -> str:
        stack = []
        stack.append([1, ""])
        num = 0
        for l in s:
            if l.isdigit():
                num = num * 10 + ord(l) - ord('0')
            elif l == '[':
                stack.append([num, ""])
                num = 0
            elif l == ']':
                stack[-2][1] += stack[-1][0] * stack[-1][1]
                stack.pop()
            else:
                stack[-1][1] += l
        return stack[0][1]
