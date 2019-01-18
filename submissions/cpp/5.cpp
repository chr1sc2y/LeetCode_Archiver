class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return s;
        int maxLen = 1;
        string longestString = s.substr(0, 1);
        for (int i = 1; i < n; ++i) {
            if (s[i - 1] == s[i + 1]) {
                int j = i - 1, k = i + 1, len = 1;
                while (j >= 0 && k < n && s[j] == s[k]) {
                    --j;
                    ++k;
                    len += 2;
                }
                if (maxLen < len) {
                    maxLen = len;
                    longestString = s.substr(j + 1, maxLen);
                }
            }
            if (s[i - 1] == s[i]) {
                int j = i - 1, k = i, len = 0;
                while (j >= 0 && k < n && s[j] == s[k]) {
                    --j;
                    ++k;
                    len += 2;
                }
                if (maxLen < len) {
                    maxLen = len;
                    longestString = s.substr(j + 1, maxLen);
                }
            }
        }
        return longestString;
    }
};
