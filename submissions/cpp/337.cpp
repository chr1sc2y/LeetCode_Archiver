class Solution {
public:
    struct Money {
        int prev;
        int curr;

        Money() : prev(0), curr(0) {}
    };

    int rob(TreeNode *root) {
        return DFS(root).curr;
    }

    Money DFS(TreeNode *root) {
        if (!root)
            return Money();
        Money leftMoney = DFS(root->left);
        Money rightMoney = DFS(root->right);
        Money currentMoney = Money();
        currentMoney.prev = leftMoney.curr + rightMoney.curr;
        currentMoney.curr = max(currentMoney.prev, root->val + leftMoney.prev + rightMoney.prev);
        return currentMoney;
    }
};