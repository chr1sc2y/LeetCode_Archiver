class Solution:
    def dailyTemperatures(self, T: List[int]) -> List[int]:
        ret = [0 for i in range(len(T))]
        stack = []
        for i in range(len(T) - 1, -1, -1):
            while stack and T[i] >= T[stack[-1]]:
                stack.pop()
            if stack:
                ret[i] = stack[-1] - i
            stack.append(i)
        return ret
