class Solution {
public:
    bool isBoomerang(vector<vector<int>> &points) {
        if (points[0] == points[1] || points[0] == points[2] || points[1] == points[2])
            return false;
        int x1 = points[0][0], y1 = points[0][1], x2 = points[1][0], y2 = points[1][1], x3 = points[2][0], y3 = points[2][1];
        if (x1 == x2 && x2 == x3)
            return false;
        if (1.0 * (y2 - y1) / (x2 - x1) == 1.0 * (y3 - y2) / (x3 - x2))
            return false;
        return true;
    }
};
