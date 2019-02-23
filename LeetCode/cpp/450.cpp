class Solution {
public:
    TreeNode *deleteNode(TreeNode *root, int key) {
        auto node = root;
        if (node && node->val == key) {
            if (!node->left)
                return node->right;
            else if (!node->right)
                return node->left;
            auto temp = node->left;
            auto right_most = temp;
            while (right_most->right)
                right_most = right_most->right;
            right_most->right = node->right;
            delete node;
            return temp;
        }
        while (node) {
            if (node->left && node->left->val == key) {
                auto temp = node->left;
                if (!temp->left) {
                    node->left = temp->right;
                    break;
                }
                node->left = temp->left;
                auto right_most = temp->left;
                while (right_most->right)
                    right_most = right_most->right;
                right_most->right = temp->right;
                delete temp;
                break;
            } else if (node->right && node->right->val == key) {
                auto temp = node->right;
                if (!temp->right) {
                    node->right = temp->left;
                    break;
                }
                node->right = temp->right;
                auto left_most = temp->right;
                while (left_most->left)
                    left_most = left_most->left;
                left_most->left = temp->left;
                delete temp;
                break;
            } else if (node->val > key)
                node = node->left;
            else
                node = node->right;

        }
        return root;
    }
};