class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        costs.sort(key=lambda x:x[0] - x[1])
        sum, n = 0, len(costs) // 2
        for i in range(n * 2):
            sum += costs[i][0] if i < n else costs[i][1]
        return sum
        