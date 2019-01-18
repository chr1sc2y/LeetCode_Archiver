class Solution {
public:
    string toGoatLatin(string S) {
        string ret;
        int m = 1, n = S.size();
        for (int i = 0; i < n; ++i) {
            int j = i + 1;
            while (j != n && S[j] != \u0027 \u0027)
                ++j;
            string temp;
            char t = tolower(S[i]);
            bool vowel = (t == \u0027a\u0027 || t == \u0027e\u0027 || t == \u0027i\u0027 || t == \u0027o\u0027 || t == \u0027u\u0027);
            if (vowel)
                temp += S[i];
            temp += S.substr(i + 1, j - i - 1);
            if (!vowel)
                temp += S[i];
            temp += "ma";
            for (int k = 0; k < m; ++k)
                temp += \u0027a\u0027;
            ++m;
            i = j;
            if(i != n)
                temp += \u0027 \u0027;
            ret += temp;
        }
        return ret;
    }
};