class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> sentences;
        vector<string> ret;
        Traversal(A, sentences);
        Traversal(B, sentences);
        for (auto s:sentences) {
            if (s.second == 1)
                ret.push_back(s.first);
        }
        return ret;
    }

    void Traversal(string &S, unordered_map<string, int> &sentences) {
        while (!S.empty()) {
            int pos = S.find(" ");
            if (pos != S.npos) {
                string &&temp = S.substr(0, pos);
                ++sentences[temp];
                S = S.substr(pos + 1, S.size() - pos);
            } else {
                ++sentences[S];
                S = "";
            }
        }
        return;
    }
};