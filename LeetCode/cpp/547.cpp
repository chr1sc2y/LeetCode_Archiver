class Solution {
    vector<int> circle;
public:
    int findCircleNum(vector<vector<int>> &M) {
        int n = M.size();
        if (n == 0)
            return 0;
        circle = vector<int>(n, 0);
        vector<int> rank(n, 0);
        for (int i = 0; i < n; ++i)
            circle[i] = i;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (M[i][j] == 1) {
                    int x = UnionFind(i);
                    int y = UnionFind(j);
                    if (circle[y] == x)
                        continue;
                    if (rank[x] > rank[y])
                        circle[y] = x;
                    else {
                        circle[x] = y;
                        if (rank[x] == rank[y])
                            ++rank[y];
                    }
                }
            }
        }
        unordered_set<int> s;
        for (int i = 0; i < n; ++i)
            s.insert(UnionFind(circle[i]));
        return s.size();
    }

    int UnionFind(int i) {
        int root = i;
        while (circle[root] != root)
            root = circle[root];
        while (i != root) {
            int p = circle[i];
            circle[i] = root;
            i = p;
        }
        return circle[i];
    }
};