class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>> &points) {
        int n = points.size(), res = 0;
        vector<unordered_map<int, int>> distance(n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (i != j)
                    ++distance[i][pow(points[i][0] - points[j][0], 2) + pow(points[i][1] - points[j][1], 2)];
        for (int i = 0; i < n; ++i)
            for (auto d:distance[i])
                res += d.second * (d.second - 1);
        return res;
    }
};
