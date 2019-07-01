class Solution {
public:
    int countNodes(TreeNode *root) {
        if (!root)
            return 0;
        auto left = root, right = root;
        int left_height = 0, right_height = 0;
        while (left) {
            ++left_height;
            left = left->left;
        }
        while (right) {
            ++right_height;
            right = right->right;
        }
        if (left_height == right_height)
            return pow(2, left_height) - 1;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};