class Solution {
public:
    TreeNode *small, *big;

    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (!root)
            return nullptr;
        small = p->val > q->val ? q : p;
        big = p->val > q->val ? p : q;
        return helper(root);
    }

    TreeNode *helper(TreeNode *root) {
        if (!root)
            return nullptr;
        if (root->val > big->val)
            return helper(root->left);
        else if (root->val < small->val)
            return helper(root->right);
        return root;
    }
};