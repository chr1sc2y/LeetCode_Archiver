class Solution {
    int mod = static_cast<int>(pow(10, 9) + 7);
public:
    int sumRootToLeaf(TreeNode *root) {
        if (!root)
            return 0;
        return Sum(root, 0);
    }

    int Sum(TreeNode *node, int &&curr) {
        int sum = 0;
        if (!node->left && !node->right)
            return curr * 2 + node->val % mod;
        if (node->left)
            sum += Sum(node->left, curr * 2 + node->val % mod);
        if (node->right)
            sum += Sum(node->right, curr * 2 + node->val % mod);
        return sum;
    }
};