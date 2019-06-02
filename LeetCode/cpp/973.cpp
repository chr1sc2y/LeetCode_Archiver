class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int K) {
        vector<vector<int>> ret;
        sort(points.begin(), points.end(), [](vector<int> &v1, vector<int> v2) {
            return (pow(v1[0], 2) + pow(v1[1], 2)) < (pow(v2[0], 2) + pow(v2[1], 2));
        });
        for (int i = 0; i < K; ++i)
            ret.push_back(points[i]);
        return ret;
    }
};
