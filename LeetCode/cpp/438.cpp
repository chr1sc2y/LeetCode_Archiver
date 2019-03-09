class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        if (n < m)
            return {};
        vector<int> std(26, 0), cur(26, 0), ret;
        for (auto ch:p)
            ++std[ch - 'a'];
        for (int i = 0; i < m - 1; ++i)
            ++cur[s[i] - 'a'];
        for (int i = m - 1; i < n; ++i) {
            ++cur[s[i] - 'a'];
            if (cur == std)
                ret.push_back(i - m + 1);
            --cur[s[i - m + 1] - 'a'];
        }
        return ret;
    }
};
