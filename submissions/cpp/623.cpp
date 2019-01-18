class Solution {
public:
    TreeNode *addOneRow(TreeNode *root, int v, int d) {
        if (d == 1) {
            auto *newRoot = new TreeNode(v);
            newRoot->left = root;
            return newRoot;
        }
        helper(root, v, d + 0);
        return root;
    }

    void helper(TreeNode *root, const int &v, int &&d) {
        if(!root)
            return;
        if (d == 2) {
            auto *newLeft = new TreeNode(v);
            if (root->left) newLeft->left = root->left;
            root->left = newLeft;
            auto *newRight = new TreeNode(v);
            if (root->right) newRight->right = root->right;
            root->right = newRight;
            return;
        }
        helper(root->left, v, d - 1);
        helper(root->right, v, d - 1);
    }
};