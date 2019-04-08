class Solution {
public:
    string removeOuterParentheses(string S) {
        string ret;
        int empty = 0, start = 0;
        for (int i = 0; i < S.size(); ++i) {
            char c = S[i];
            if (c == '(')
                ++empty;
            else if (c == ')')
                --empty;
            if (empty == 0) {
                ret += S.substr(start + 1, i - start - 1);
                start = i + 1;
            }
        }
        return ret;
    }
};
