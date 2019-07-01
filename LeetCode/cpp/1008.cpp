class Solution {
public:
    TreeNode *bstFromPreorder(vector<int> &preorder) {
        return Construct(preorder, 0, preorder.size());
    }

    TreeNode *Construct(vector<int> &preorder, int begin, int end) {
        if (begin >= end)
            return nullptr;
        auto node = new TreeNode(preorder[begin]);
        int i = begin + 1, j = end, mid = 0;
        while (i < j) {
            mid = i + (j - i) / 2;
            if (preorder[mid] < preorder[begin])
                i = mid + 1;
            else
                j = mid;
        }
        j = max(i, j);
        node->left = Construct(preorder, begin + 1, j);
        node->right = Construct(preorder, j, end);
        return node;
    }
};
