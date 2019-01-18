class Solution {
public:
    int tilt = 0;

    int findTilt(TreeNode *root) {
        if (!root)
            return 0;
        tilt = 0;
        helper(root, tilt);
        return tilt;
    }

    int helper(TreeNode *root, int &tilt) {
        if (!root)
            return 0;
        if (!root->left && !root->right)
            return root->val;
        int leftSum = helper(root->left, tilt);
        int rightSum = helper(root->right, tilt);
        tilt += abs(leftSum - rightSum);
        return leftSum + rightSum + root->val;
    }
};