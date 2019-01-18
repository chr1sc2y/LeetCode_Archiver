class Solution {
public:
    TreeNode *insertIntoBST(TreeNode *root, int val) {
        TreeNode *child = root;
        while (child) {
            if (val > child->val) {
                if (!child->right) {
                    auto *temp = new TreeNode(val);
                    child->right = temp;
                    break;
                }
                child = child->right;
            } else {
                if (!child->left) {
                    auto *temp = new TreeNode(val);
                    child->left = temp;
                    break;
                }
                child = child->left;
            }
        }
        return root;
    }
};