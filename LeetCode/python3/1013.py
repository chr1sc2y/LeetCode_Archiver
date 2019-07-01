class Solution:
    def canThreePartsEqualSum(self, A: List[int]) -> bool:
        s = sum(A)
        if s % 3 != 0:
            return False
        s //= 3
        cum = 0
        total = 0
        for a in A:
            cum += a
            if cum == s:
                total += 1
                cum = 0
        if total == 3 and cum == 0:
            return True
        return False
