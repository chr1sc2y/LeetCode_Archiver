class Solution {
public:
    TreeNode *invertTree(TreeNode *root) {
        if (!root)
            return nullptr;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty()) {
            TreeNode *temp = que.front();
            swap(temp->left, temp->right);
            que.pop();
            if (temp->left) que.push(temp->left);
            if (temp->right) que.push(temp->right);
        }
        return root;
    }
};