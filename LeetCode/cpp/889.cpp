class Solution {
public:
    TreeNode *constructFromPrePost(vector<int> &pre, vector<int> &post) {
        if (pre.size() == 0)
            return nullptr;
        return ConstructTree(pre, post, 0, pre.size() - 1, 0, post.size() - 1);
    }

    TreeNode *
    ConstructTree(vector<int> &pre, vector<int> &post, const int &i, const int &j, const int &m, const int &n) {
        if (i > j || m > n)
            return nullptr;
        auto *node = new TreeNode(pre[i]);
        if (i == j || m == n)
            return node;

        int temp = pre[i + 1];
        int k = n;
        while (k >= m) {
            if (post[k] == temp)
                break;
            --k;
        }
        node->left = ConstructTree(pre, post, i + 1, i + (k - m + 1), m, k);
        node->right = ConstructTree(pre, post, i + (k - m + 1) + 1, j, k + 1, n - 1);
        return node;
    }
};