class Solution {
public:
    string customSortString(string &S, string &T) {
        vector<int> pos(26, 26);
        for (int i = 0; i < S.size(); ++i)
            pos[S[i] - 'a'] = i;
        sort(T.begin(), T.end(), [pos](const char &t1, const char &t2) {
            return pos[t1 - 'a'] < pos[t2 - 'a'];
        });
        return T;
    }
};
