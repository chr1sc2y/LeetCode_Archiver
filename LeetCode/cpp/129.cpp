class Solution {
public:
    struct NodeValue {
        TreeNode *node;
        int value;

        NodeValue(TreeNode *node, int value) : node(node), value(value) {}
    };

    int sumNumbers(TreeNode *root) {
        if (!root)
            return 0;
        int sum = 0;
        queue<NodeValue> que;
        que.push(NodeValue(root, 0));
        while (!que.empty()) {
            NodeValue node = que.front();
            que.pop();
            if (!node.node->left && !node.node->right) {
                sum += node.value * 10 + node.node->val;
            }
            if (node.node->left)
                que.push(NodeValue(node.node->left, node.value * 10 + node.node->val));
            if (node.node->right)
                que.push(NodeValue(node.node->right, node.value * 10 + node.node->val));
        }
        return sum;
    }
};
