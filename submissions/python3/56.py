class Solution:
    def merge(self, intervals):
        """
        :type intervals: List[Interval]
        :rtype: List[Interval]
        """
        intervals.sort(key=lambda x: x.start)
        ret = []
        for interval in intervals:
            if not ret or interval.start > ret[-1].end:
                ret.append(interval)
            else:
                ret[-1].end = max(ret[-1].end, interval.end)
        return ret