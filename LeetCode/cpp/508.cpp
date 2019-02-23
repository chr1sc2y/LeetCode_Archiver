class Solution {
public:
    unordered_map<int, int> sums;

    vector<int> findFrequentTreeSum(TreeNode *root) {
        CountSum(root);
        vector<int> treeSum;
        int time = 0;
        for (auto sum : sums) {
            if (time < sum.second) {
                time = sum.second;
                treeSum.clear();
                treeSum.push_back(sum.first);
            } else if (time == sum.second)
                treeSum.push_back(sum.first);
        }
        return treeSum;
    }

    int CountSum(TreeNode *node) {
        if (!node)
            return 0;
        int &&leftSum = CountSum(node->left);
        int &&rightSum = CountSum(node->right);
        int &&currentSum = leftSum + rightSum + node->val;
        ++sums[currentSum];
        return currentSum;
    }
};
