class Solution {
    int lx, ly, fx, fy, x, y;
public:
    bool isCousins(TreeNode *root, int x, int y) {
        if (!root)
            return false;
        this->x = x;
        this->y = y;
        FindXY(root, 0, root->val);
        return lx == ly && fx != fy;
    }

    void FindXY(TreeNode *root, int &&layer, int &f) {
        if (!root)
            return;
        if (root->val == x) {
            lx = layer;
            fx = f;
        }
        if (root->val == y) {
            ly = layer;
            fy = f;
        }
        FindXY(root->left, layer + 1, root->val);
        FindXY(root->right, layer + 1, root->val);
    }
};