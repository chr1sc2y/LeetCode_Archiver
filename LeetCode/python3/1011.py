class Solution:
    def shipWithinDays(self, weights: List[int], D: int) -> int:
        low, high, mid = 1, 25000000, 0
        while low < high:
            mid = low + (high - low) // 2
            if (self.IsShippable(weights, mid, D)):
                high = mid
            else:
                low = mid + 1
        return high

    def IsShippable(self, weights, capacity, D) -> bool:
        i, day = 0, 1
        while i < len(weights) and day <= D:
            residual = capacity
            while i < len(weights) and residual - weights[i] >= 0:
                residual -= weights[i]
                i += 1
            if i >= len(weights):
                return True
            day += 1
        return False
