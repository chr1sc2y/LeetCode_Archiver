class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i = 0, j = num, &&mid = 0, &&square = 0;
        while (i <= j) {
            mid = (i + j) / 2;
            square = mid * mid;
            if (square == num)
                return true;
            else if (square < num)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return false;
    }
};