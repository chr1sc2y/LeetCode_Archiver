class Solution {
public:
    vector<int> gridIllumination(int N, vector<vector<int>> &lamps, vector<vector<int>> &queries) {
        unordered_map<int, int> row, col, up_diagonal, down_diagonal;
        unordered_map<int, unordered_map<int, int>> lamp;
        vector<int> ret;
        for (auto &l: lamps) {
            int r = l[0], c = l[1];
            ++row[r], ++col[c], ++up_diagonal[r + c], ++down_diagonal[r - c];
            lamp[r][c] = 1;
        }
        for (auto &q:queries) {
            int r = q[0], c = q[1];
            if (row[r] || col[c] || up_diagonal[r + c] || down_diagonal[r - c]) {
                ret.push_back(1);
                for (int i = -1; i <= 1 && r + i >= 0 && r + i < N; ++i) {
                    for (int j = -1; j <= 1 && j + c >= 0 && j + c < N; ++j) {
                        if (lamp[r + i][c + j] == 1) {
                            --row[r + i];
                            --col[c + j];
                            --up_diagonal[r + i + c + j];
                            --down_diagonal[r + i - c - j];
                            lamp[r + i][c + j] = 0;
                        }
                    }
                }
            } else
                ret.push_back(0);
        }
        return ret;
    }
};