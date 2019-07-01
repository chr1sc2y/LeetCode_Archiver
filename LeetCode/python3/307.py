class NumArray:

    def __init__(self, nums: List[int]):
        self.n = len(nums)
        self.vector = [0 for _ in range(2 * self.n)]
        j = 0
        for i in range(self.n, 2 * self.n):
            self.vector[i] = nums[j]
            j += 1
        for i in range(self.n - 1, 0, -1):
            self.vector[i] = self.vector[i * 2] + self.vector[i * 2 + 1]

    def update(self, i: int, val: int) -> None:
        i += self.n
        prev = self.vector[i]
        while i > 0:
            self.vector[i] += val - prev
            i //= 2

    def sumRange(self, i: int, j: int) -> int:
        sum = 0
        i += self.n
        j += self.n
        while i <= j:
            if i % 2 == 1:
                sum += self.vector[i]
                i += 1
            if j % 2 == 0:
                sum += self.vector[j]
                j -= 1
            i //= 2
            j //= 2
        return sum
