class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        vector<vector<int>> ret;
        if (!root)
            return ret;
        vector<int> cur;
        int len = 1;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty()) {
            TreeNode *temp = que.front();
            que.pop();
            --len;
            cur.push_back(temp->val);
            if (temp->left) que.push(temp->left);
            if (temp->right) que.push(temp->right);
            if (!len) {
                ret.push_back(cur);
                cur.clear();
                len = que.size();
            }
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};