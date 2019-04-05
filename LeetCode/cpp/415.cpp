class Solution {
public:
    string addStrings(string num1, string num2) {
        int m = num1.size(), n = num2.size();
        string longer, shorter;
        if (m >= n) {
            longer = num1;
            shorter = num2;
        } else {
            longer = num2;
            shorter = num1;
            swap(m, n);
        }
        int carry = 0, i = 1;
        while (i <= n) {
            int sum = longer[m - i] - '0' + shorter[n - i] - '0' + carry;
            carry = sum / 10;
            sum %= 10;
            longer[m - i] = sum + '0';
            ++i;
        }
        while (carry) {
            if (m - i < 0) {
                longer.insert(longer.begin(), '1');
                break;
            }
            int sum = longer[m - i] - '0' + carry;
            carry = sum / 10;
            sum %= 10;
            longer[m - i] = sum + '0';
            ++i;
        }
        return longer;
    }
};
