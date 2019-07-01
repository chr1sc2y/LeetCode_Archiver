class Solution {
    vector<int> disjoint;
public:
    vector<int> findRedundantConnection(vector<vector<int>> &edges) {
        vector<int> ret(2, 0);
        unordered_map<int, int> rank;
        disjoint = vector<int>(1001, 0);
        for (int i = 0; i < edges.size(); ++i) {
            auto e = edges[i];
            if (disjoint[e[0]] == 0) {
                disjoint[e[0]] = e[0];
                rank.insert(pair<int, int>(e[0], 0));
            }
            if (disjoint[e[1]] == 0) {
                disjoint[e[1]] = e[1];
                rank.insert(pair<int, int>(e[1], 0));
            }
            int a = UnionFind(e[0]);
            int b = UnionFind(e[1]);
            if (a == b) {
                ret[0] = e[0];
                ret[1] = e[1];
            }
            if (rank[a] > rank[b])
                disjoint[b] = a;
            else {
                disjoint[a] = b;
                if (rank[a] == rank[b])
                    ++rank[a];
            }
        }
        return ret;
    }

    int UnionFind(int &k) {
        if (disjoint[k] != k)
            disjoint[k] = UnionFind(disjoint[k]);
        return disjoint[k];
    }
};