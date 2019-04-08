class Solution:
    class Athlete:
        def __init__(self, score, pos):
            self.score = score
            self.pos = pos

    def findRelativeRanks(self, nums: List[int]) -> List[str]:
        n, athletes = len(nums), []
        for i in range(n):
            athletes.append(self.Athlete(nums[i], i))
        athletes = sorted(athletes, key=lambda a: a.score, reverse=True)
        ret = ["" for _ in range(n)]
        medal = ["Gold Medal", "Silver Medal", "Bronze Medal"]
        i, j = 0, 0
        for i in range(n):
            if j <= 2:
                ret[athletes[i].pos] = medal[j]
                j += 1
            else:
                ret[athletes[i].pos] = str(i + 1)
            i += 1
        return ret
