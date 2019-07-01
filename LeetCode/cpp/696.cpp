class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.size(), total = 0, prev = 0, curr = 1;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i - 1]) {
                total += min(prev, curr);
                prev = curr;
                curr = 1;
            } else
                ++curr;
        }
        return total + min(prev, curr);
    }
};