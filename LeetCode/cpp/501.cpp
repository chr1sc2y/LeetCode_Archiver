class Solution {
public:
    TreeNode *prev;
    int k, maxNum;
    vector<int> ret;

    vector<int> findMode(TreeNode *root) {
        ret.clear();
        if (!root)
            return ret;
        prev = nullptr;
        k = 0;
        maxNum = 0;
        inOrder(root);
        return ret;
    }

    void inOrder(TreeNode *root) {
        if (!root)
            return;
        inOrder(root->left);

        if (prev) {
            if (root->val == prev->val) {
                ++k;
                if (k > maxNum) {
                    maxNum = k;
                    ret.clear();
                    ret.push_back(root->val);
                } else if (k == maxNum)
                    ret.push_back(root->val);
            } else {
                k = 1;
                if (k == maxNum)
                    ret.push_back(root->val);
            }
        } else {
            ret.push_back(root->val);
            k = 1;
            maxNum = 1;
        }
        prev = root;

        inOrder(root->right);
    }
};