class Solution:
    def eraseOverlapIntervals(self, intervals: List[Interval]) -> int:
        intervals.sort(key=lambda x: x.start)
        prev, count = 0, 0
        for i in range(1, len(intervals)):
            if intervals[i].start < intervals[prev].end:
                count += 1
                if intervals[i].end <= intervals[prev].end:
                    prev = i
            else:
                prev = i
        return count