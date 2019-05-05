class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> res{0, 0};
        if (a > b) swap(a, b);
        if (a > c) swap(a, c);
        if (b > c) swap(b, c);
        if (a == b - 1) {
            res[0] = (b == c - 1 ? 0 : 1);
            res[1] = c - b - 1;
        } else if (c == b + 1) {
            res[0] = 1;
            res[1] = b - a - 1;
        } else {
            res[0] = (b == a + 2 || c == b + 2 ? 1 : 2);
            res[1] = c - b - 1 + b - a - 1;
        }
        return res;
    }
};
