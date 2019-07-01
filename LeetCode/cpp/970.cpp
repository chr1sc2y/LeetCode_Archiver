class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> s;
        vector<int> ret;
        int i = 1, j = 1;
        while (i + j <= bound) {
            while (i + j <= bound) {
                s.insert(i + j);
                if (y == 1)
                    break;
                j *= y;
            }
            j = 1;
            if (x == 1)
                break;
            i *= x;
        }
        for (auto m:s)
            ret.push_back(m);
        return ret;
    }
};
