class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>> &paths) {
        vector<int> res(N);
        vector<vector<int>> adjacent(N);
        for (auto path:paths) {
            adjacent[path[0] - 1].push_back(path[1] - 1);
            adjacent[path[1] - 1].push_back(path[0] - 1);
        }
        for (int i = 0; i < N; ++i) {
            vector<bool> used(5);
            auto &ad = adjacent[i];
            for (auto &a:ad)
                used[res[a]] = true;
            for (int j = 1; j <= 4; ++j) {
                if (!used[j]) {
                    res[i] = j;
                    break;
                }
            }
        }
        return res;
    }
};
