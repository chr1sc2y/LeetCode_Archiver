class Solution {
public:
    TreeNode *increasingBST(TreeNode *root) {
        if (!root)
            return nullptr;
        root->right = increasingBST(root->right);
        if (root->left) {
            TreeNode *temp = increasingBST(root->left), *left = temp;
            while (left->right)
                left = left->right;
            left->right = root;
            root->left = nullptr;
            return temp;
        }
        return root;
    }
};