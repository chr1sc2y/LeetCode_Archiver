class NumArray:
    def __init__(self, nums: List[int]):
        self.nums = nums
        self.sum = []
        cul = 0
        for i in range(len(nums)):
            cul += nums[i]
            self.sum.append(cul)

    def sumRange(self, i: int, j: int) -> int:
        return self.sum[j] - self.sum[i] + self.nums[i]
