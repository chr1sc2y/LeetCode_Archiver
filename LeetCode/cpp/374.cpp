// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long i = 1, j = n, &&mid = 0, &&res = 0;
        while (i <= j) {
            mid = (i + j) / 2;
            res = guess(mid);
            if (res == 0)
                return mid;
            else if (res == 1)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return mid;
    }
};