class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, i = s.size() - 1;
        while (s[i] == ' ')
            --i;
        while (i >= 0) {
            if (s[i] == ' ')
                break;
            ++len;
            --i;
        }
        return len;
    }
};