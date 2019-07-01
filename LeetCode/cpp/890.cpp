class Solution {
public:
    vector<string> findAndReplacePattern(vector<string> &words, string pattern) {
        vector<string> ret;
        int size = pattern.size();
        for (string word: words) {
            int wordSize = word.size();
            if (size != wordSize)
                continue;
            map<char, char> p;
            map<char, char> q;
            int i = 0;
            for (i = 0; i < size; ++i) {
                if (p.find(pattern[i]) == p.end()) {
                    p.insert(map<char, char>::value_type(pattern[i], word[i]));
                } else {
                    if (p[pattern[i]] != word[i])
                        break;
                }
                if (q.find(word[i]) == q.end()) {
                    q.insert(map<char, char>::value_type(word[i], pattern[i]));
                } else {
                    if (q[word[i]] != pattern[i])
                        break;
                }
            }
            if (i == size)
                ret.push_back(word);
        }
        return ret;
    }
};