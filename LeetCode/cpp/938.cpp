class Solution {
    int sum;
public:
    int rangeSumBST(TreeNode *root, int &L, int &R) {
        sum = 0;
        DFS(root, L, R);
        return sum;
    }

    void DFS(TreeNode *node, int &L, int &R) {
        if (!node)
            return;
        if (node->val >= L && node->val <= R)
            sum += node->val;
        if (node->val < R)
            DFS(node->right, L, R);
        if (node->val > L)
            DFS(node->left, L, R);
    }
};
