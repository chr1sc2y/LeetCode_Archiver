class Solution {
    vector<unordered_set<int>> graph;
    vector<int> contains, ret;
    vector<bool> visited;
    int n;
public:
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>> &edges) {
        n = N;
        graph = vector<unordered_set<int>>(N, unordered_set<int>());
        contains = vector<int>(N, 1);
        ret = vector<int>(N, 0);
        visited = vector<bool>(N, false);
        for (auto &e:edges) {
            graph[e[0]].insert(e[1]);
            graph[e[1]].insert(e[0]);
        }
        DFS(0);
        visited = vector<bool>(N, false);
        CountDistance(0);
        return ret;
    }

    void DFS(int root) {
        visited[root] = true;
        for (auto &node: graph[root]) {
            if (visited[node])
                continue;
            DFS(node);
            contains[root] += contains[node];
            ret[root] += ret[node] + contains[node];
        }
    }

    void CountDistance(int root) {
        visited[root] = true;
        for (auto &node:graph[root]) {
            if (visited[node])
                continue;
            ret[node] = (ret[root] - ret[node] - contains[node] + n - contains[node]) + ret[node];
            CountDistance(node);
        }
    }
};