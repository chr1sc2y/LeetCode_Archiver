class Solution {
public:
    int networkDelayTime(vector<vector<int>> &times, int N, int K) {
        vector<unordered_map<int, int>> graph(N, unordered_map<int, int>());
        vector<int> distance(N, INT_MAX);
        for (auto &t:times)
            graph[t[0] - 1].insert(pair<int, int>(t[1] - 1, t[2]));
        DFS(K - 1, 0, graph, distance);
        int ret = -1;
        for (auto &d:distance) {
            if (d == INT_MAX)
                return -1;
            ret = max(ret, d);
        }
        return ret;
    }

    void DFS(int root, int dis, vector<unordered_map<int, int>> &graph, vector<int> &distance) {
        if (dis >= distance[root])
            return;
        distance[root] = dis;
        for (auto &node:graph[root])
            DFS(node.first, dis + node.second, graph, distance);
    }
};