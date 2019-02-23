class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        if (size <= 1)
            return s;
        int start = 0, len = 1, i = 0;
        while (i < size) {
            int j = i - 1, k = i + 1;
            while (k < size && s[i] == s[k])
                ++k;
            i = k;
            while (j >= 0 && k < size && s[j] == s[k]) {
                --j;
                ++k;
            }
            if (k - j - 1 > len) {
                start = j + 1;
                len = k - j - 1;
            }
        }
        return s.substr(start, len);
    }
};