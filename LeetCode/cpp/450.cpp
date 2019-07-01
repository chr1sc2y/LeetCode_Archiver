class Solution {
public:
    TreeNode *deleteNode(TreeNode *root, int key) {
        if (!root)
            return nullptr;
        auto ret = root;
        if (root->val == key) {
            if (!root->right)
                return root->left;
            else if (!root->left)
                return root->right;
            auto right_left = root->right;
            while (right_left->left)
                right_left = right_left->left;
            right_left->left = root->left->right;
            root->left->right = root->right;
            return root->left;
        }
        auto prev = root;
        while (root) {
            if (root->val < key) {
                prev = root;
                root = root->right;
            } else if (root->val > key) {
                prev = root;
                root = root->left;
            } else {
                if (root == prev->left) {
                    if (!root->left && !root->right) {
                        prev->left = nullptr;
                        return ret;
                    } else if (!root->left) {
                        prev->left = root->right;
                        return ret;
                    } else if (!root->right) {
                        prev->left = root->left;
                        return ret;
                    }
                    auto right_left = root->right;
                    while (right_left->left)
                        right_left = right_left->left;
                    right_left->left = root->left->right;
                    root->left->right = root->right;
                    prev->left = root->left;
                    return ret;
                } else {
                    if (!root->left && !root->right) {
                        prev->right = nullptr;
                        return ret;
                    } else if (!root->left) {
                        prev->right = root->right;
                        return ret;
                    } else if (!root->right) {
                        prev->right = root->left;
                        return ret;
                    }
                    auto right_left = root->right;
                    while (right_left->left)
                        right_left = right_left->left;
                    right_left->left = root->left->right;
                    root->left->right = root->right;
                    prev->right = root->left;
                    return ret;
                }
            }
        }
        return ret;
    }
};
