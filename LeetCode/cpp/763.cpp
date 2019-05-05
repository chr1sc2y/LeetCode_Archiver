class Solution {
public:
    vector<int> partitionLabels(string S) {
        int start = 0, end = 0, n = S.size();
        vector<int> res, pos(26);
        for (int i = 0; i < n; ++i)
            pos[S[i] - 'a'] = i;
        for (int i = 0; i < n; ++i) {
            end = max(end, pos[S[i] - 'a']);
            if (end == i) {
                res.push_back(end - start + 1);
                start = i + 1;
                end = start;
            }
        }
        return res;
    }
};
