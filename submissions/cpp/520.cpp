class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        for (int i = 0; i < n; ++i) {
            int j = i + 1;
            while (j != n && word[j] != \u0027 \u0027)
                ++j;
            if (j == i + 1) {
                ++i;
                continue;
            }
            bool upper = false;
            if (word[i] >= \u0027A\u0027 && word[i] <= \u0027Z\u0027 && word[i + 1] >= \u0027A\u0027 && word[i + 1] <= \u0027Z\u0027)
                upper = true;
            for (int k = i + 1; k < j; ++k) {
                if (upper && word[k] >= \u0027a\u0027 && word[k] <= \u0027z\u0027)
                    return false;
                if (!upper && word[k] >= \u0027A\u0027 && word[k] <= \u0027Z\u0027)
                    return false;
            }
        }
        return true;
    }
};