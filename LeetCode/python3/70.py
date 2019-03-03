class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1 or n == 0:
            return 1
        prev, curr = 1, 1
        for i in range(2, n + 1):
            temp = curr
            curr += prev
            prev = temp
        return curr
