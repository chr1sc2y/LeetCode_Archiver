class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph) {
        vector<int> ret;
        vector<int> res;
        int n = graph.size();
        res = vector<int>(n, 0);
        for (int i = 0; i < n; ++i) {
            if (res[i] == 0)
                DFS(i, graph, res);
        }
        for (int i = 0; i < n; ++i)
            if (res[i] == 2)
                ret.push_back(i);
        return ret;
    }

    bool DFS(int root, vector<vector<int>> &graph, vector<int> &res) {
        res[root] = 1;
        for (auto &node:graph[root]) {
            if (res[node] == 2)
                continue;
            if (res[node] == 1 || !DFS(node, graph, res))
                return false;
        }
        res[root] = 2;
        return true;
    }
};