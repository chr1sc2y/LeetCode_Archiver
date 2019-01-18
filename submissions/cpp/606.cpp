class Solution {
public:
    string tree2str(TreeNode *t) {
        string str;
        if (!t)
            return str;
        PreOrder(t, str);
        str.erase(str.begin());
        str.erase(str.end() - 1);
        return str;
    }

    void PreOrder(TreeNode *root, string &str) {
        if (!root)
            return;
        str += \u0027(\u0027;
        str += to_string(root->val);
        if (!root->left && root->right)
            str += "()";
        PreOrder(root->left, str);
        PreOrder(root->right, str);
        str += \u0027)\u0027;
        return;
    }
};