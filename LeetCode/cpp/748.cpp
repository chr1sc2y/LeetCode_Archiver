class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string> &words) {
        string ret;
        int minLen = INT_MAX;
        unordered_map<char, int> letters;
        for (char l : licensePlate)
            if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'))
                ++letters[tolower(l)];
        for (const string &w: words) {
            auto len = w.size();
            if (len >= minLen) continue;
            auto temp = letters;
            for (const char &c:w) {
                if (temp.find(c) != temp.end()) {
                    --temp[c];
                    if (!temp[c])
                        temp.erase(c);
                } else
                    continue;
            }
            if (temp.empty()) {
                ret = w;
                minLen = len;
            }
        }
        return ret;
    }
};