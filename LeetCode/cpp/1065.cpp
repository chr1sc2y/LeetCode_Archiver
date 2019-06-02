class Solution {
public:
    vector<vector<int>> indexPairs(string &text, vector<string> &words) {
        vector<vector<int>> res;
        for (auto &word:words) {
            int i = 0;
            int pos = text.find(word);
            while (pos != -1) {
                res.push_back(vector<int>{pos, static_cast<int>(pos + word.size() - 1)});
                i = pos + 1;
                pos = text.find(word, i);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};
