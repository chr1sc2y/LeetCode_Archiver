class Solution {
public:
    vector<int> inorder;
    vector<int> postorder;

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        int size = inorder.size();
        if (size == 0)
            return nullptr;
        this->inorder = inorder;
        this->postorder = postorder;
        return FindSubtree(0, size - 1, 0, size - 1);
    }

    TreeNode *FindSubtree(int &&i, int &&j, int &&m, int &&n) {
        if (i > j)
            return nullptr;
        TreeNode *node = new TreeNode(postorder[n]);
        int k = i;
        while (k < j) {
            if (inorder[k] == postorder[n])
                break;
            ++k;
        }
        node->left = FindSubtree(i + 0, k - 1, m + 0, m + k - i - 1);
        node->right = FindSubtree(k + 1, j + 0, m + k - i, n - 1);
        return node;
    }
};
