class Solution {
public:
    vector<int> view;

    vector<int> rightSideView(TreeNode *root) {
        if (!root)
            return {};
        view.clear();
        queue<TreeNode *> que;
        que.push(root);
        int size = 1, index = 1;
        while (!que.empty()) {
            TreeNode *temp = que.front();
            if (view.size() < index)
                view.push_back(temp->val);
            que.pop();
            if (temp->right) que.push(temp->right);
            if (temp->left) que.push(temp->left);
            --size;
            if (size == 0) {
                size = que.size();
                ++index;
            }
        }
        return view;
    }
};
