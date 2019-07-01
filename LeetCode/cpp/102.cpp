class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        if (!root)
            return {};
        vector<vector<int>> traversal;
        vector<int> currentLevel = vector<int>();
        queue<TreeNode *> que;
        que.push(root);
        int size = 1;
        while (!que.empty()) {
            TreeNode *temp = que.front();
            que.pop();
            if (temp->left) que.push(temp->left);
            if (temp->right) que.push(temp->right);
            currentLevel.push_back(temp->val);
            --size;
            if (size == 0) {
                size = que.size();
                traversal.push_back(currentLevel);
                currentLevel = vector<int>();
            }
        }
        return traversal;
    }
};
