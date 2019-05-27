class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> seq;
        unordered_map<string, char> rev;
        vector<string> s;
        int b = 0;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == ' ') {
                s.push_back(str.substr(b, i - b));
                b = i + 1;
            }
        }
        s.push_back(str.substr(b, str.size() - b));
        if (s.size() != pattern.size())
            return false;
        for (int i = 0; i < pattern.size(); ++i) {
            if ((seq.find(pattern[i]) != seq.end() && seq[pattern[i]] != s[i]) ||
                (rev.find(s[i]) != rev.end() && rev[s[i]] != pattern[i]))
                return false;
            cout << 1;
            seq[pattern[i]] = s[i];
            cout << 2;
            rev[s[i]] = pattern[i];
            cout << 3;
        }
        return true;
    }
};
