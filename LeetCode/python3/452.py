class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key=lambda x: x[0])
        if len(points) == 0:
            return 0
        start, end, count = points[0][0], points[0][1], 0
        for i in range(1, len(points)):
            if max(start, points[i][0]) <= min(end, points[i][1]):
                start = max(start, points[i][0])
                end = min(end, points[i][1])
            else:
                count += 1
                start = points[i][0]
                end = points[i][1]
        return count + 1
