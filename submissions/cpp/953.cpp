class Solution {
public:
    bool isAlienSorted(vector<string> &words, string order) {
        unordered_map<char, int> dic;
        dic.insert(pair<char, int>(\u0027#\u0027, 0));
        for (int i = 1; i <= order.size(); ++i)
            dic.insert(pair<char, int>(order[i - 1], i));
        bool lex = false;
        int maxSize = 0;
        for (string w : words)
            maxSize = maxSize < w.size() ? w.size() : maxSize;
        for (int i = 0; i < words.size(); ++i) {
            int sub = maxSize - words[i].size();
            if (sub > 0)
                for (int j = 0; j < sub; ++j)
                    words[i] += "#";
        }
        for (int i = 0; i < maxSize; ++i) {
            int curLex = 0;
            for (int j = 0; j < words.size() - 1; ++j) {
                if (dic[words[j][i]] > dic[words[j + 1][i]]) {
                    curLex = 2;
                    break;
                } else if (dic[words[j][i]] == dic[words[j + 1][i]]) {
                    curLex = 1;
                }
            }
            if (curLex == 0) {
                lex = true;
                break;
            } else if (curLex == 2)
                break;
        }
        if (lex)
            return true;
        return false;
    }
};