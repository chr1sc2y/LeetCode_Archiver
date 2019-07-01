class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> vec;
        stack<TreeNode *> s;
        while (root || !s.empty()) {
            if (root) {
                s.push(root);
                root = root->left;
            } else {
                root = s.top();
                s.pop();
                vec.push_back(root->val);
                root = root->right;
            }
        }
        return vec;
    }
};