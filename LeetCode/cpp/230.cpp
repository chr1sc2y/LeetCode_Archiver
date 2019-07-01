class Solution {
public:
    vector<int> vec;

    int kthSmallest(TreeNode *root, int k) {
        stack<TreeNode *> stk;
        while (root || !stk.empty()) {
            if (root) {
                stk.push(root);
                root = root->left;
            } else {
                root = stk.top();
                stk.pop();
                --k;
                if (k == 0)
                    return root->val;
                root = root->right;
            }
        }
    }
};
