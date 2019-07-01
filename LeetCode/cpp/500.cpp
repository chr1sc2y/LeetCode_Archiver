class Solution {
public:
    vector<string> findWords(vector<string> &words) {
        string tempRow0 = "qwertyuiop", tempRow1 = "asdfghjkl", tempRow2 = "zxcvbnm";
        unordered_set<char> first(tempRow0.begin(), tempRow0.end()),
                second(tempRow1.begin(), tempRow1.end()),
                third(tempRow2.begin(), tempRow2.end());
        vector<string> ret;
        for (auto word : words) {
            bool row = true;
            unordered_set<char> temp;
            temp = (first.find(tolower(word[0])) == first.end() ?
                    (second.find(tolower(word[0])) == second.end() ? third : second) : first);
            for (int i = 1; i < word.size(); ++i) {
                if (temp.find(tolower(word[i])) == temp.end()) {
                    row = false;
                    break;
                }
            }
            if (row)
                ret.push_back(word);
        }
        return ret;
    }
};