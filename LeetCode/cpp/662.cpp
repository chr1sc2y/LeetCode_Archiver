class Solution {
public:
    struct PosNode {
        TreeNode *node;
        unsigned long pos;

        PosNode(TreeNode *node, unsigned long pos) : node(node), pos(pos) {}
    };

    int widthOfBinaryTree(TreeNode *root) {
        if (!root)
            return 0;
        queue<PosNode *> que;
        unsigned long max_width = 1, left = 0, right = 0;
        auto size = 1;
        que.push(new PosNode(root, 1));
        while (!que.empty()) {
            PosNode *curr = que.front();
            que.pop();
            --size;
            if (curr) {
                if (left == 0) {
                    left = curr->pos;
                } else
                    right = curr->pos;
                if (curr->node->left) que.push(new PosNode(curr->node->left, curr->pos * 2));
                if (curr->node->right) que.push(new PosNode(curr->node->right, curr->pos * 2 + 1));
            }
            if (size == 0) {
                size = que.size();
                max_width = max(max_width, right > left ? right - left + 1 : 0);
                left = 0;
                right = 0;
            }
        }
        return max_width;
    }
};
