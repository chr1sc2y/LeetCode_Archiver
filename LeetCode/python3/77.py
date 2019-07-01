class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        combinations = []
        used = [False for _ in range(n)]
        self.BackTrack(0, n, k, [], combinations, used)
        return combinations

    def BackTrack(self, m, n, k, combination, combinations, used):
        if k == 0:
            combinations.append(combination)
            return combination
        for i in range(m, n):
            if not used[i]:
                combination.append(i + 1)
                used[i] = True
                combination = self.BackTrack(i + 1, n, k - 1, combination, combinations, used)
                combination = combination[:-1]
                used[i] = False
        return combination
