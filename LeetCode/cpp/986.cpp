class Solution {
public:
    vector<Interval> intervalIntersection(vector<Interval> &A, vector<Interval> &B) {
        int i = 0, j = 0, m = A.size(), n = B.size();
        if (m == 0 || n == 0)
            return {};
        vector<Interval> ret;
        while (i < m && j < n) {
            if (B[j].start > A[i].end)
                ++i;
            else if (A[i].start > B[j].end)
                ++j;
            else {
                ret.push_back(Interval(max(A[i].start, B[j].start), min(A[i].end, B[j].end)));
                if (A[i].end > B[j].end)
                    ++j;
                else
                    ++i;
            }
        }
        return ret;
    }
};