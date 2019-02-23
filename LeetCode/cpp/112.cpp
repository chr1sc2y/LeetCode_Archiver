class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
        if (!root)
            return false;
        if (sum - root->val == 0 && !root->left && !root->right)
            return true;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};