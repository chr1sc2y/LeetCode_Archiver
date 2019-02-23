class Solution {
public:
    int numMatchingSubseq(string S, vector<string> &words) {
        unordered_map<char, vector<int>> sub;
        int total = 0;
        for (int i = 0; i < S.size(); ++i) {
            if (sub.find(S[i]) == sub.end())
                sub[S[i]] = vector<int>();
            sub[S[i]].push_back(i);
        }
        for (int i = 0; i < words.size(); ++i) {
            auto &word = words[i];
            int j = 0, current_sub = -1;
            bool exist = true;
            while (j < word.size()) {
                auto c = word[j];
                if (sub[c].size() == 0) {
                    exist = false;
                    break;
                }
                int x = 0, y = sub[c].size(), mid = 0;
                while (x < y) {
                    mid = x + (y - x) / 2;
                    if (sub[c][mid] > current_sub)
                        y = mid;
                    else if (sub[c][mid] <= current_sub)
                        x = mid + 1;
                }
                if (x == sub[c].size()) {
                    exist = false;
                    break;
                } else
                    current_sub = sub[c][y];
                ++j;
            }
            if (exist)
                ++total;
        }
        return total;
    }
};