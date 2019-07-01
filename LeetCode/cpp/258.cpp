class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            int sum = 0, temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            num = sum;
        }
        return num;
    }
};
