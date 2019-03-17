class Solution {
public:
    int bitwiseComplement(int N) {
        if (N == 0)
            return 1;
        int m = 1, res = 0;
        while (N) {
            res += m * (N % 2 ^ 1);
            N >>= 1;
            m <<= 1;
        }
        return res;
    }
};
