class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ret(2, 1);
        ret[0] = -1e9, ret[1] = 1e9;
        int low = 1, high = area;
        while (low <= high) {
            high = area / low;
            if (area % low == 0 && abs(low - high) < abs(ret[0] - ret[1])) {
                ret[0] = high;
                ret[1] = low;
            }
            ++low;
        }
        return ret;
    }
};
