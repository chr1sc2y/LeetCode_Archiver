class Solution {
public:
    TreeNode *pruneTree(TreeNode *root) {
        if(!root || !TraverseFor1(root))
            return nullptr;
        return root;
    }

    bool TraverseFor1(TreeNode *root) {
        if (!root)
            return false;
        bool &&leftContains1 = TraverseFor1(root->left);
        if (root->left && !leftContains1) {
            delete root->left;
            root->left = nullptr;
        }
        bool &&rightContains1 = TraverseFor1(root->right);
        if (root->right && !rightContains1) {
            delete root->right;
            root->right = nullptr;
        }

        return leftContains1 || rightContains1 || (root->val == 1);
    }
};