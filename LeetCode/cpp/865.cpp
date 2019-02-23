class Solution {
public:
    unordered_set<int> nodes;
    int maxLvl;
    TreeNode *ret;

    TreeNode *subtreeWithAllDeepest(TreeNode *root) {
        maxLvl = 0;
        nodes.clear();
        ret = nullptr;
        Traverse(root, 1);
        bool &&temp = SearchCommonRoot(root);
        return ret;
    }

    void Traverse(TreeNode *node, int &&lvl) {
        if (!node)
            return;
        if (maxLvl < lvl) {
            maxLvl = lvl;
            nodes.clear();
            nodes.insert(node->val);
        } else if (maxLvl == lvl)
            nodes.insert(node->val);
        Traverse(node->left, lvl + 1);
        Traverse(node->right, lvl + 1);
    }

    bool SearchCommonRoot(TreeNode *node) {
        if (!node)
            return false;
        if (nodes.find(node->val) != nodes.end()) {
            if (!ret)
                ret = node;
            return true;
        }
        bool &&left = SearchCommonRoot(node->left);
        bool &&right = SearchCommonRoot(node->right);
        if (left && right)
            ret = node;
        return left || right;
    }
};