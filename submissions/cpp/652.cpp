class Solution {
public:
    vector<TreeNode *> sub;
    unordered_map<string, int> m;

    vector<TreeNode *> findDuplicateSubtrees(TreeNode *root) {
        sub.clear();
        m.clear();
        Traverse(root);
        return sub;
    }

    string Traverse(TreeNode *node) {
        if (!node)
            return "#";
        string s;
        s += to_string(node->val);
        string left = Traverse(node->left);
        string right = Traverse(node->right);
        s += \u0027,\u0027 + left + \u0027,\u0027 + right;

        if (m[s] == 1)
            sub.push_back(node);
        ++m[s];
        return s;
    }
};
