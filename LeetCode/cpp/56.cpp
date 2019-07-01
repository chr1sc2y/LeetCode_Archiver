bool operator<(const Interval &interval1, const Interval &interval2) {
    return interval1.start < interval2.start;
}

class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> ret;
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size(); ++i) {
            if (ret.empty() || ret.back().end < intervals[i].start)
                ret.push_back(intervals[i]);
            else
                ret.back().end = max(ret.back().end, intervals[i].end);
        }
        return ret;
    }
};
