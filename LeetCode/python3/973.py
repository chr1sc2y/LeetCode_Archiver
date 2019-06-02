class Solution:
    def kClosest(self, points, K):
        """
        :type points: List[List[int]]
        :type K: int
        :rtype: List[List[int]]
        """
        points.sort(key=lambda p: pow(p[0], 2) + pow(p[1], 2))
        return points[:K]
