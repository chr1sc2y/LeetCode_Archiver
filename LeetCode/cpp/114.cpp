class Solution {
public:
    void flatten(TreeNode *root) {
        while (root) {
            TreeNode *temp = root->left;
            while (temp && temp->right) {
                temp = temp->right;
            }
            if (temp) {
                temp->right = root->right;
                root->right = root->left;
                root->left = nullptr;
            }
            root = root->right;
        }
    }
};
