/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  struct TreeLinkNode *left, *right, *next;
 * };
 *
 */

void connect(struct TreeLinkNode *root) {
    if (!root)
        return;
    Support(root, NULL);
}

void Support(struct TreeLinkNode *node, struct TreeLinkNode *next) {
    if (node) {
        if (node->left && node->right)
            node->left->next = node->right;
        if (node->right && next && next->left)
            node->right->next = next->left;
        Support(node->left, node->right);
        Support(node->right, next && next->left ? next->left : NULL);
    }
}
