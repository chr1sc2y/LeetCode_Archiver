class Solution {
public:
    bool isValidBST(TreeNode *root) {
        if (!root)
            return true;
        stack<tuple<TreeNode *, int *, int *>> s;
        s.push(make_tuple(root, nullptr, nullptr));
        while (!s.empty()) {
            auto curr = s.top();
            s.pop();
            auto node = get<0>(curr);
            auto &min_val = get<1>(curr), &max_val = get<2>(curr);
            if ((min_val && *min_val >= node->val) || (max_val && *max_val <= node->val))
                return false;
            if (node->left)
                s.push(make_tuple(node->left, min_val, &node->val));
            if (node->right)
                s.push(make_tuple(node->right, &node->val, max_val));
        }
        return true;
    }
};