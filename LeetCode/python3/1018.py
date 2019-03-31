class Solution:
    def prefixesDivBy5(self, A: List[int]) -> List[bool]:
        num = 0
        ret = [False for _ in range(len(A))]
        for i in range(len(A)):
            num = (num * 2 + A[i]) % 5
            ret[i] = True if num == 0 else False
        return ret
