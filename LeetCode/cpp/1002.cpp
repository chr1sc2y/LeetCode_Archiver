class Solution {
public:
    vector<string> commonChars(vector<string> &A) {
        int n = A.size();
        if (n == 0)
            return {};
        vector<vector<int>> chars(n, vector<int>(26, 0));
        for (int i = 0; i < n; ++i) {
            string a = A[i];
            for (char c:a)
                ++chars[i][c - 'a'];
        }
        vector<int> res = chars[0];
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < chars[i].size(); ++j)
                res[j] = min(res[j], chars[i][j]);
        }
        vector<string> ret;
        for (int i = 0; i < res.size(); ++i) {
            for (int j = 0; j < res[i]; ++j)
                ret.emplace_back(string(1, i + 'a'));
        }
        return ret;
    }
};