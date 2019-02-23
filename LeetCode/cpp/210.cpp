class Solution {
public:
    vector<int> findOrder(int n, vector<pair<int, int>> &prerequisites) {
        vector<unordered_set<int>> graph(n, unordered_set<int>());
        vector<int> in_degree(n, 0);
        vector<int> seq;
        for (int i = 0; i < prerequisites.size(); ++i)
            graph[prerequisites[i].second].insert(prerequisites[i].first);
        for (int i = 0; i < n; ++i)
            for (auto in:graph[i])
                ++in_degree[in];
        for (int i = 0; i < n; ++i) {
            int j = 0;
            while (j < n) {
                if (in_degree[j] == 0)
                    break;
                ++j;
            }
            if (j == n)
                continue;
            seq.push_back(j);
            in_degree[j] = -1;
            for (auto &post:graph[j]) {
                --in_degree[post];
            }
        }
        return seq.size() == n ? seq : vector<int>{};
    }
};