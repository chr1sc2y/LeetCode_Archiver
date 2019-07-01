class Solution {
public:
    int maxLen = 0;

    int diameterOfBinaryTree(TreeNode *root) {
        if (!root)
            return 0;
        maxLen = 0;
        int len = helper(root->left) + helper(root->right);
        if (maxLen < len) maxLen = len;
        return maxLen;
    }

    int helper(TreeNode *root) {
        if (!root)
            return 0;
        else if (!root->left && !root->right)
            return 1;
        int leftLen = helper(root->left);
        int rightLen = helper(root->right);
        int &&len = leftLen + rightLen;
        if (maxLen < len) maxLen = len;
        return 1 + (leftLen > rightLen ? leftLen : rightLen);
    }
};