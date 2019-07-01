class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int> &barcodes) {
        int i = 0, n = barcodes.size();
        unordered_map<int, int> count;
        vector<int> res(n);
        vector<vector<int>> match;
        for (auto b:barcodes)
            ++count[b];
        for (auto &c:count)
            match.push_back(vector<int>{c.first, c.second});
        sort(match.begin(), match.end(), [](vector<int> &m1, vector<int> &m2) {
            return m1[1] > m2[1];
        });
        for (auto &m:match) {
            for (int &j = m[1]; j > 0; --j) {
                res[i] = m[0];
                i += 2;
                if (i >= n)
                    i = 1;
            }
        }
        return res;
    }
};
