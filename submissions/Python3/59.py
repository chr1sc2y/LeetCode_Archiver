class Solution:
    def generateMatrix(self, n):
        """
        :type n: int
        :rtype: List[List[int]]
        """
        ret = [[0 for i in range(n)] for j in range(n)]
        top, down, left, right= 0, n, 0, n
        m = 1
        while left < right and top < down:
            for y in range(left, right):
                ret[top][y] = m
                m += 1
            top += 1
            for x in range(top, down):
                ret[x][right - 1]= m
                m += 1
            right -= 1
            for y in range(right - 1, left - 1, -1):
                ret[down - 1][y]= m
                m += 1
            down -= 1
            for x in range(down - 1, top - 1, -1):
                ret[x][left]= m
                m += 1
            left += 1
        return ret