class Solution {
public:
    vector<string> vec;

    string smallestFromLeaf(TreeNode *root) {
        string ret;
        if (!root)
            return ret;
        FindString(root, ret);
        for (auto &s:vec)
            std::reverse(s.begin(), s.end());
        ret = vec[0];
        for (int i = 1; i < vec.size(); ++i)
            ret = min(ret, vec[i]);
        return ret;
    }

    void FindString(TreeNode *node, string &curr) {
        curr += ('a' + node->val);
        if (!node->left && !node->right)
            vec.push_back(curr);
        if (node->left)
            FindString(node->left, curr);
        if (node->right)
            FindString(node->right, curr);
        curr.pop_back();
    }


};