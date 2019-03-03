class Solution:

    def __init__(self, w: List[int]):
        self.nums = w
        for i in range(1, len(w)):
            self.nums[i] += self.nums[i - 1]

    def pickIndex(self) -> int:
        m = random.randint(1, self.nums[-1])
        i, j, k = 0, len(self.nums) - 1, 0
        while i < j:
            k = i + (j - i) // 2
            if self.nums[k] < m:
                i = k + 1
            else:
                j = k
        return i
