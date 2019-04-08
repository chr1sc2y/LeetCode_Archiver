class Solution {
public:
    vector<bool> camelMatch(vector<string> &queries, string pattern) {
        int m = pattern.size();
        vector<bool> ret;
        for (auto &string:queries) {
            bool flag = true;
            int j = 0;
            for (int i = 0; i < string.size(); ++i) {
                char c = string[i];
                if (c <= 'Z') {
                    if (j >= m || c != pattern[j]) {
                        flag = false;
                        break;
                    }
                    ++j;
                } else if (c == pattern[j])
                    ++j;
            }
            ret.push_back(flag && j == m);
        }
        return ret;
    }
};