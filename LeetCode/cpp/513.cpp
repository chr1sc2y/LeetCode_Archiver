class Solution {
public:
    int findBottomLeftValue(TreeNode *root) {
        queue<TreeNode *> que;
        que.push(root);
        int &&size = 1;
        int val = root->val;
        while (!que.empty()) {
            TreeNode *temp = que.front();
            --size;
            que.pop();
            if (temp->left) que.push(temp->left);
            if (temp->right) que.push(temp->right);
            if (size == 0) {
                size = que.size();
                if (size != 0)
                    val = que.front()->val;
            }
        }
        return val;
    }
};