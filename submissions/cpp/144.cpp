class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        if (!root)
            return {};
        vector<int> vec;
        stack<TreeNode *> que;
        que.push(root);
        while (!que.empty()) {
            TreeNode *temp = que.top();
            vec.push_back(temp->val);
            que.pop();
            if (temp->right) que.push(temp->right);
            if (temp->left) que.push(temp->left);
        }
        return vec;
    }
};