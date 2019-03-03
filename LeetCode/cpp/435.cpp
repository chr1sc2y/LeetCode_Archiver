class Solution {
  public:
    int eraseOverlapIntervals(vector<Interval> &intervals) {
        int count = 0;
        auto comp = [](Interval &v1, Interval &v2) {
            return v1.start < v2.start;
        };
        sort(intervals.begin(), intervals.end(), comp);
        int pre = 0;
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i].start < intervals[pre].end) {
                ++count;
                if (intervals[i].end < intervals[pre].end)
                    pre = i;
            } else
                pre = i;
        }
        return count;
    }
};
