class Solution {
public:
    int rotatedDigits(int N) {
        int total = 0;
        for (int i = 2; i <= N; ++i) {
            int j = i;
            bool valid = true;
            int rotated = 0, cur = 1;
            while (j > 0) {
                int temp = j % 10;
                if (temp == 1 || temp == 8 || temp == 0)
                    rotated += temp * cur;
                else if (temp == 2)
                    rotated += 5 * cur;
                else if (temp == 5)
                    rotated += 2 * cur;
                else if (temp == 6)
                    rotated += 9 * cur;
                else if (temp == 9)
                    rotated += 6 * cur;
                else {
                    valid = false;
                    break;
                }
                cur *= 10;
                j /= 10;
            }
            if (!valid)
                continue;
            if (i != rotated)
                ++total;
        }
        return total;
    }
};