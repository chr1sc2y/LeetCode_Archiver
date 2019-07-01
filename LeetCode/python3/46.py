class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        def BackTrack(m, per: list):
            if m == n:
                permutation.append(per)
                return per
            for i in range(n):
                if not visited[i]:
                    per.append(nums[i])
                    visited[i] = True
                    per = BackTrack(m + 1, per)
                    per = per[:-1]
                    visited[i] = False
            return per

        n = len(nums)
        visited = [False for _ in range(n)]
        per = []
        permutation = []
        BackTrack(0, [])
        return permutation
