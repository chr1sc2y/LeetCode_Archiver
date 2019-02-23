class Solution {
public:
    int climbStairs(int n) {
        if (n < 2) return 1;
        if (n == 2) return 2;
        int prev = 1, last = 2, sum;
        for (int i = 3; i <= n; ++i) {
            sum = prev + last;
            prev = last;
            last = sum;
        }
        return sum;
    }
};