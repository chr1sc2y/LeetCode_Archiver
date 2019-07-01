class Solution {
public:
    int longestStrChain(vector<string> &words) {
        unordered_map<int, unordered_set<string>> dict;
        unordered_map<string, int> dp;
        int min_len = INT_MAX, max_len = 0, res = 1, temp = 1, n = words.size();
        for (auto &word:words) {
            dp[word] = 1;
            dict[word.size()].insert(word);
            min_len = min(min_len, static_cast<int>(word.size()));
            max_len = max(max_len, static_cast<int>(word.size()));
        }
        int i = min_len + 1;
        while (i <= max_len) {
            if (dict[i].empty()) {
                while (i <= max_len && dict[i].empty())
                    ++i;
            } else {
                for (auto str:dict[i]) {
                    for (int j = 0; j < str.size(); ++j) {
                        string temp_str = str;
                        temp_str.erase(temp_str.begin() + j);
                        if (dp[temp_str] > 0) {
                            dp[str] = max(dp[str], dp[temp_str] + 1);
                            res = max(res, dp[str]);
                        }
                    }
                }
            }
            ++i;
        }
        return res;
    }
};
