class Solution {
public:
    vector<TreeNode *> allPossibleFBT(int N) {
        if (N % 2 == 0 || N < 0)
            return {};
        else if (N == 1)
            return {new TreeNode(0)};
        vector<TreeNode *> ret;
        for (int i = 1; i < N; i += 2) {
            auto left = allPossibleFBT(N - i - 1);
            auto right = allPossibleFBT(i);
            for (auto &l:left) {
                for (auto &r:right) {
                    auto node = new TreeNode(0);
                    node->left = l;
                    node->right = r;
                    ret.push_back(node);
                }
            }
        }
        return ret;
    }
};