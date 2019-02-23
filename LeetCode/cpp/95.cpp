class Solution {
public:
    vector<TreeNode *> generateTrees(int n) {
        return n ? traverse(1, n) : vector<TreeNode *>();
    }

    vector<TreeNode *> traverse(int m, int n) {
        if (m > n)
            return {nullptr};
        vector<TreeNode *> trees;
        for (int i = m; i <= n; ++i) {
            vector<TreeNode *> left = traverse(m, i - 1);
            vector<TreeNode *> right = traverse(i + 1, n);
            for (auto &l:left) {
                for (auto &r:right) {
                    auto root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    trees.push_back(root);
                }
            }
        }
        return trees;
    }
};