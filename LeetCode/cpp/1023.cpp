class Solution {
public:
    vector<bool> camelMatch(vector<string> &queries, string &pattern) {
        vector<bool> ret;
        int n = pattern.size();
        for (auto &query:queries) {
            bool res = true;
            int i = 0;
            for (auto &q:query) {
                if (q < 'Z') {
                    if (i >= n || q != pattern[i]) {
                        res = false;
                        break;
                    }
                    ++i;
                } else if (q == pattern[i])
                    ++i;
            }
            ret.push_back(res && i == n);
        }
        return ret;
    }
};
