class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        for (int i = 0; i < n; ++i) {
            int j = i + 1;
            while (j != n && word[j] != ' ')
                ++j;
            if (j == i + 1) {
                ++i;
                continue;
            }
            bool upper = false;
            if (word[i] >= 'A' && word[i] <= 'Z' && word[i + 1] >= 'A' && word[i + 1] <= 'Z')
                upper = true;
            for (int k = i + 1; k < j; ++k) {
                if (upper && word[k] >= 'a' && word[k] <= 'z')
                    return false;
                if (!upper && word[k] >= 'A' && word[k] <= 'Z')
                    return false;
            }
        }
        return true;
    }
};