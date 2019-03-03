class Solution:
    def numberOfArithmeticSlices(self, A: List[int]) -> int:
        consecutive, curr, sum = 0, 0, 0
        cul = [0 for i in range(len(A))]
        for i in range(2, len(A)):
            if A[i] - A[i - 1] == A[i - 1] - A[i - 2]:
                consecutive += 1
                curr += consecutive
            else:
                consecutive = 0
                sum += curr
                curr = 0
        return sum if curr == 0 else sum + curr
