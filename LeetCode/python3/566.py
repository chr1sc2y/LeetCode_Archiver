class Solution:
    def matrixReshape(self, nums: List[List[int]], r: int, c: int) -> List[List[int]]:
        m, n = len(nums), len(nums[0]) if len(nums) > 0 else 0
        if m == 0 or m * n != r * c:
            return nums
        x, y = 0, 0
        ret = []
        temp = []
        for i in range(m):
            for j in range(n):
                temp.append(nums[i][j])
                y += 1
                if y == c:
                    ret.append(temp)
                    x += 1
                    y = 0
                    temp = []
        return ret
