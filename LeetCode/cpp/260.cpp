class Solution {
public:
    vector<int> singleNumber(vector<int> &nums) {
        int x = 0, s = 1;
        for (auto m:nums)
            x ^= m;
        while ((x & s) == 0)
            s <<= 1;
        vector<int> ret(2, 0);
        for (auto m:nums)
            (m & s) == 0 ? ret[0] ^= m : ret[1] ^= m;
        return ret;
    }
};
