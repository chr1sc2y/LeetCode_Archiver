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