class Solution {
    int min_diff;
public:
    int minDiffInBST(TreeNode *root) {
        min_diff = INT_MAX;
        Traverse(root);
        return min_diff;
    }

    void Traverse(TreeNode *node) {
        if (!node)
            return;
        if (node->left) {
            auto s = node->left;
            while (s->right)
                s = s->right;
            min_diff = min(min_diff, node->val - s->val);
        }
        if (node->right) {
            auto s = node->right;
            while (s->left)
                s = s->left;
            min_diff = min(min_diff, s->val - node->val);
        }
        Traverse(node->left);
        Traverse(node->right);
    }
};