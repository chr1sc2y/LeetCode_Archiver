class Solution {
public:
    bool isSubtree(TreeNode *s, TreeNode *t) {
        if (!s)
            return false;
        return compareNode(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
    }

    bool compareNode(TreeNode *s, TreeNode *t) {
        if (!s && !t)
            return true;
        else if (!s || !t || s->val != t->val)
            return false;
        return compareNode(s->left, t->left) && compareNode(s->right, t->right);
    }
};