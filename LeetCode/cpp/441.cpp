class Solution {
public:
    int arrangeCoins(int n) {
        int &&i = 1;
        while (n > 0)
            n -= i++;
        return n < 0 ? i - 2 : i - 1;
    }
};