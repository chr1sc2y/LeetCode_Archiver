class Solution {
public:
    vector<string> spellchecker(vector<string> &wordlist, vector<string> &queries) {
        vector<string> ret;

        unordered_set<string> dict;
        unordered_map<string, int> lowerCaseDict;
        unordered_map<string, int> vowelDict;
        for (int i = 0; i < wordlist.size(); ++i) {
            string word = wordlist[i];
            dict.insert(word);

            ToLower(word);
            if(lowerCaseDict.find(word) == lowerCaseDict.end())
                lowerCaseDict[word] = i;

            for (int i = 0; i < word.size(); ++i) {
                if (word[i] == \u0027a\u0027 || word[i] == \u0027e\u0027 || word[i] == \u0027i\u0027 || word[i] == \u0027o\u0027 ||
                    word[i] == \u0027u\u0027)
                    word[i] = \u0027#\u0027;
            }
            if(vowelDict.find(word) == vowelDict.end())
                vowelDict[word] = i;
        }

        for (auto q:queries) {
            if (dict.find(q) != dict.end()) {
                ret.push_back(q);
                continue;
            }

            string temp = q;
            ToLower(temp);
            if (lowerCaseDict.find(temp) != lowerCaseDict.end()) {
                ret.push_back(wordlist[lowerCaseDict[temp]]);
                continue;
            }

            for (int i = 0; i < q.size(); ++i) {
                if (temp[i] == \u0027a\u0027 || temp[i] == \u0027e\u0027 || temp[i] == \u0027i\u0027 || temp[i] == \u0027o\u0027 ||
                    temp[i] == \u0027u\u0027)
                    temp[i] = \u0027#\u0027;
            }
            if (vowelDict.find(temp) != vowelDict.end()) {
                ret.push_back(wordlist[vowelDict[temp]]);
                continue;
            }

            ret.push_back("");
        }

        return ret;
    }

    void ToLower(string &str) {
        for (int i = 0; i < str.size(); ++i)
            str[i] = tolower(str[i]);
    }
};
