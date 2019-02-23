class Solution {
public:
    bool isBalanced(TreeNode *root) {
        if (!root)
            return true;
        int &&left = maxHeight(root->left), &&right = maxHeight(root->right);
        return (abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right));
    }

    int maxHeight(TreeNode *node) {
        if (!node)
            return 0;
        return 1 + max(maxHeight(node->left), maxHeight(node->right));
    }
};