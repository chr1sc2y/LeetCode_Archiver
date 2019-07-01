class Solution {
public:
    int first, second;

    int findSecondMinimumValue(TreeNode *root) {
        if (!root)
            return -1;
        first = -1, second = -1;
        helper(root);
        return second;
    }

    void helper(TreeNode *root) {
        if (!root)
            return;
        if (first == -1)
            first = root->val;
        if (first != root->val) {
            if (second == -1 || second > root->val)
                second = root->val;
        }
        if (root->val <= second || second == -1) {
            helper(root->left);
            helper(root->right);
        }
    }
};