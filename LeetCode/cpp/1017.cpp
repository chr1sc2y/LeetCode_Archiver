class Solution {
public:
    string baseNeg2(int N) {
        if (N == 0 || N == 1)
            return to_string(N);
        vector<int> res;
        while (N) {
            res.push_back(N & 1);
            N = -(N >> 1);
        }
        string ret;
        for (int i = res.size() - 1; i >= 0; --i)
            ret += to_string(res[i]);
        return ret;
    }
};
