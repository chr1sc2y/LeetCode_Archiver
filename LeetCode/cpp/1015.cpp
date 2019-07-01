class Solution {
public:
    int smallestRepunitDivByK(int K) {
        int n = 0;
        for (int i = 1; i <= K; ++i) {
            n = n * 10 + 1;
            n %= K;
            if (n == 0)
                return i;
        }
        return -1;
    }
};
