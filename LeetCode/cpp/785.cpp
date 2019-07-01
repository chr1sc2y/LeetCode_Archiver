class Solution {
public:
    bool isBipartite(vector<vector<int>> &graph) {
        int n = graph.size();
        vector<int> part(n, -1);
        for (int i = 0; i < n; ++i) {
            if (part[i] == -1) {
                queue<int> que;
                que.push(i);
                part[i] = 0;
                int size = 1;
                while (!que.empty()) {
                    auto root = que.front();
                    que.pop();
                    for (auto &node:graph[root]) {
                        if (part[node] == -1) {
                            part[node] = part[root] ^ 1;
                            que.push(node);
                        } else if (part[node] == part[root])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};