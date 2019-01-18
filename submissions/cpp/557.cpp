class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            int j = i + 1;;
            while (j < n && s[j] != \u0027 \u0027)
                ++j;
            for (int k = i; k < (j + i) / 2; ++k)
                swap(s[k], s[j + i - k - 1]);
            i = j;
        }
        return s;
    }
};
