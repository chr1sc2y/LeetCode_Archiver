class Solution {
public:
    int minSwapsCouples(vector<int> &row) {
        int res = 0, n = row.size();
        vector<int> pos(n);
        for (int i = 0; i < n; ++i)
            pos[row[i]] = i;
        for (int i = 0; i < n; i += 2) {
            int p = row[i] % 2 == 0 ? row[i] + 1 : row[i] - 1;
            int c = row[i + 1];
            if (row[i + 1] != p) {
                swap(row[pos[c]], row[pos[p]]);
                swap(pos[c], pos[p]);
                ++res;
            }
        }
        return res;
    }
};
