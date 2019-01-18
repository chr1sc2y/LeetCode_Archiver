class Solution {
public:
    string shiftingLetters(string S, vector<int> &shifts) {
        vector<char> shift;
        int num = \u0027z\u0027 - \u0027a\u0027 + 1;
        for (int i = S.size() - 2; i >= 0; --i) {
            shifts[i] += shifts[i + 1];
            shifts[i] %= num;
        }
        for (int i = 0; i < S.size(); ++i) {
            int temp = S[i] + shifts[i];
            while (temp > \u0027z\u0027)
                temp -= num;
            shift.push_back(temp);
        }
        string ret(shift.begin(), shift.end());
        return ret;
    }
};