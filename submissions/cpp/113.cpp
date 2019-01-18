class Solution {
public:
    vector<vector<int>> pathSum(TreeNode *root, int sum) {
        vector<vector<int>> ret;
        if (!root)
            return ret;
        vector<int> path;
        helper(root, path, ret, sum);
        return ret;
    }

    void helper(TreeNode *root, vector<int> &path, vector<vector<int>> &ret, int sum) {
        if (!root)
            return;
        sum -= root->val;
        path.push_back(root->val);
        if (!root->left && !root->right && sum == 0) {
            ret.push_back(path);
            sum += root->val;
            path.pop_back();
            return;
        }
        helper(root->left, path, ret, sum);
        helper(root->right, path, ret, sum);
        sum += root->val;
        path.pop_back();
    }
};