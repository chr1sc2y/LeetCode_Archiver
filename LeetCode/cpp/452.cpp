class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        sort(points.begin(), points.end(), [](pair<int, int>& p1, pair<int, int>& p2){
            return p1.first < p2.first;
        });
        if (points.size() == 0)
            return 0;
        int start = points[0].first, end = points[0].second, count = 0;
        for (int i = 1; i < points.size(); ++i) {
            if (max(points[i].first, start) <= min(points[i].second, end)) {
                start = max(points[i].first, start);
                end = min(points[i].second, end);
            }
            else {
                ++count;
                start = points[i].first;
                end = points[i].second;
            }
        }
        return count + 1;
    }
};
