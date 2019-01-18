class Solution {
public:
    int mySqrt(int x) {
        int i = 0, j = x;
        long &&mid = 0,&&square = 0;
        while(i <= j) {
            mid = (i + j )/ 2;
            square = mid *mid;
            if(square == x)
                return mid;
            else if (square < x)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return j;
    }
};