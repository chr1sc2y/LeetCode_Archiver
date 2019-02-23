class Solution {
    vector<int> preorder, inorder;
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        this->preorder = preorder;
        this->inorder = inorder;
        return Support(0, static_cast<int>(preorder.size()) - 1, 0, static_cast<int>(inorder.size() - 1));
    }

    TreeNode *Support(int i, int j, int m, int n) {
        if (i > j || m > n)
            return nullptr;
        auto node = new TreeNode(preorder[i]);
        int x = m;
        while (x < n) {
            if (inorder[x] == preorder[i])
                break;
            ++x;
        }
        node->left = Support(i + 1, i + x - m, m, x - 1);
        node->right = Support(i + x - m + 1, j, x + 1, n);
        return node;
    }
};