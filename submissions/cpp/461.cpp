class Solution {
public:
    int hammingDistance(int x, int y) {
        int sum = 0;
        while(x != 0 || y != 0) {
            int i = x % 2, j = y  % 2;
            cout << i << \u0027 \u0027 << j << endl;
            sum += (i ^ j == 1 ? 1 : 0);
            cout << sum << endl;
            x /= 2;
            y /= 2;
        }
        return sum;
    }
};