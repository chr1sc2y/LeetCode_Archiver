class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        ret = []
        self.Backtrack(k, n, [], ret, 1)
        return ret

    def Backtrack(self, k, sum, combination, ret, m):
        if k == 0:
            if sum == 0:
                ret.append(combination)
            return combination
        for i in range(m, 10):
            if sum - i < 0:
                break
            combination.append(i)
            combination = self.Backtrack(k - 1, sum - i, combination, ret, i + 1)
            combination = combination[:-1]
        return combination