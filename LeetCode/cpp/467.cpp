class Solution {
public:
    int findSubstringInWraproundString(string p) {
        int n = p.size();
        if (n == 0)
            return 0;
        vector<int> con(26, 0);
        con[p[0] - 'a'] = 1;
        int sum = 0, len = 1;
        for (int i = 1; i < n; ++i) {
            if ((p[i] == p[i - 1] + 1))
                con[p[i] - 'a'] = max(++len, con[p[i] - 'a']);
            else if (p[i] == p[i - 1] - 25)
                con[0] = max(++len, con[0]);
            else {
                con[p[i] - 'a'] = max(con[p[i] - 'a'], 1);
                len = 1;
            }
        }
        for (int i = 0; i < 26; ++i)
            sum += con[i];
        return sum;
    }
};
