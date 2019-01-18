class Solution {
public:
    TreeNode *searchBST(TreeNode *root, const int &val) {
        if (!root)
            return nullptr;
        if (root->val == val)
            return root;
        return val > root->val ? searchBST(root->right, val) : searchBST(root->left, val);
    }
};