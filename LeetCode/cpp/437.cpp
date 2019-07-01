class Solution {
public:
    vector<int> sums;
    int num;
    int total;

    int pathSum(TreeNode *root, int sum) {
        if (!root)
            return 0;
        num = sum;
        total = 0;
        sums.clear();
        sums.push_back(root->val);
        if (root->val == sum)
            ++total;
        helper(root->left);
        helper(root->right);
        return total;
    }

    void helper(TreeNode *node) {
        if (!node)
            return;
        for (int i = 0; i < sums.size(); ++i) {
            sums[i] += node->val;
            if (sums[i] == num)
                ++total;
        }
        sums.push_back(node->val);
        if (node->val == num)
            ++total;
        helper(node->left);
        helper(node->right);
        sums.pop_back();
        for (int i = 0; i < sums.size(); ++i)
            sums[i] -= node->val;
    }
};