class Solution {
public:
    int heightChecker(vector<int> &heights) {
        auto r = heights;
        sort(r.begin(), r.end());
        int res = 0;
        for (int i = 0; i < r.size(); ++i)
            res += (heights[i] != r[i]);
        return res;
    }
};
