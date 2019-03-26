class Solution {
public:
    vector<int> diStringMatch(string S) {
        S += 'E';
        int n = S.size(), m = S.size() - 1, j = 0;
        vector<int> ret(n, 0);
        for (int i = 0; i < n; ++i)
            ret[i] = S[i] == 'I' ? j++ : m--;
        return ret;
    }
};
