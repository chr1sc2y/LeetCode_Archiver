class Solution {
public:

    vector<int> largestValues(TreeNode *root) {
        if (!root)
            return {};
        vector<int> val;
        searchValues(root, 0, val);
        return val;
    }

    void searchValues(TreeNode *root, int &&lvl, vector<int> &val) {
        if (!root)
            return;
        if (val.size() <= lvl)
            val.push_back(root->val);
        else if (val[lvl] < root->val) val[lvl] = root->val;
        searchValues(root->left, lvl + 1, val);
        searchValues(root->right, lvl + 1, val);
    }
};
