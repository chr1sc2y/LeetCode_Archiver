class Solution {
public:
    bool hasGroupsSizeX(vector<int> &deck) {
        unordered_map<int, int> group;
        for (auto d:deck)
            ++group[d];
        int gcd = 0;
        for (auto g:group) {
            if (gcd == 0)
                gcd = g.second;
            else
                gcd = GreatestCommonDivisor(gcd, g.second);
        }
        return gcd >= 2;
    }

    int GreatestCommonDivisor(const int &a, const int &b) {
        const int &greater = max(a, b), &smaller = min(a, b);
        int remainder = greater % smaller;
        return remainder == 0 ? smaller : GreatestCommonDivisor(smaller, remainder);
    }
};
