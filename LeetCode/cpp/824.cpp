class Solution {
public:
    string toGoatLatin(string S) {
        string ret;
        int m = 1, n = S.size();
        for (int i = 0; i < n; ++i) {
            int j = i + 1;
            while (j != n && S[j] != ' ')
                ++j;
            string temp;
            char t = tolower(S[i]);
            bool vowel = (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u');
            if (vowel)
                temp += S[i];
            temp += S.substr(i + 1, j - i - 1);
            if (!vowel)
                temp += S[i];
            temp += "ma";
            for (int k = 0; k < m; ++k)
                temp += 'a';
            ++m;
            i = j;
            if(i != n)
                temp += ' ';
            ret += temp;
        }
        return ret;
    }
};