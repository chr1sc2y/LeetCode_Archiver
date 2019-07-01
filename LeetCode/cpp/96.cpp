class Solution {
public:
    int numTrees(int n) {
        vector<int> trees(n + 1, 0);
        trees[0] = 1;
        trees[1] = 1;
        for (int i = 2; i <= n; ++i)
            for (int j = 1; j <= i; ++j)
                trees[i] += trees[j - 1] * trees[i - j];
        return trees[n];
    }
};