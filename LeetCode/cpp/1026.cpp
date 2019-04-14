class Solution {
    int diff;
public:
    int maxAncestorDiff(TreeNode *root) {
        if (!root)
            return 0;
        this->diff = 0;
        Traverse(root, root->val, root->val);
        return this->diff;
    }

    void Traverse(TreeNode *node, int min_val, int max_val) {
        if (!node)
            return;
        this->diff = max(this->diff, max(abs(node->val - min_val), abs(node->val - max_val)));
        min_val = min(min_val, node->val), max_val = max(max_val, node->val);
        Traverse(node->left, min_val, max_val);
        Traverse(node->right, min_val, max_val);
    }
};
