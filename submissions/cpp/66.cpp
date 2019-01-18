class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int extra = 1;
        for (int i = digits.size() - 1; i >= 0; --i) {
            digits[i] += extra;
            extra = digits[i] / 10;
            digits[i] %= 10;
        }
        if (extra == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
