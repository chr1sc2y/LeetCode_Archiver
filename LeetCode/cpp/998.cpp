class Solution {
public:
    TreeNode *insertIntoMaxTree(TreeNode *root, int val, TreeNode *p = nullptr) {
        if (!root || root->val < val) {
            auto node = new TreeNode(val);
            if (root)
                node->left = root;
            if (p)
                p->right = node;
            return node;
        }
        root->right = insertIntoMaxTree(root->right, val, root);
        return root;
    }
};