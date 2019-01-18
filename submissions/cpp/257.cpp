class Solution {
public:
    vector<string> ret;

    vector<string> binaryTreePaths(TreeNode *root) {
        ret.clear();
        if (!root)
            return ret;
        string path;
        path += to_string(root->val);
        helper(root->left, path);
        helper(root->right, path);
        if (ret.empty())
            ret.push_back(path);
        return ret;
    }

    void helper(TreeNode *root, string &path) {
        if (!root)
            return;
        if (!root->left && !root->right) {
            string &&temp = path + "->" + to_string(root->val);
            ret.push_back(temp);
            return;
        }
        int &&size = path.size();
        path += "->" + to_string(root->val);
        helper(root->left, path);
        helper(root->right, path);
        path = path.substr(0, size);
    }
};