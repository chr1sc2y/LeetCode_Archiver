class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (!root)
            return true;
        return compareNode(root->left, root->right);
    }

    bool compareNode(TreeNode *p, TreeNode *q) {
        if (!p && !q)
            return true;
        else if (!p || !q || p->val != q->val)
            return false;
        return compareNode(p->left, q->right) && compareNode(p->right, q->left);
    }
};