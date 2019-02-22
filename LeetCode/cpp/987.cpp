class Solution {
public:
    unordered_map<int, unordered_map<int, set<int>>> nums;

    vector<vector<int>> verticalTraversal(TreeNode *root) {
        if (!root)
            return {};
        nums.clear();
        Traverse(root, 0, 0);
        vector<vector<int>> ret;
        for (int i = -1000; i <= 1000; ++i) {
            if (nums.find(i) != nums.end()) {
                ret.push_back(vector<int>());
                for (int j = 0; j <= 1000; ++j) {
                    if (nums[i].find(j) != nums[i].end())
                        ret.back().insert(end(ret.back()), begin(nums[i][j]), end(nums[i][j]));
                }
            }
        }
        return ret;
    }

    void Traverse(TreeNode *node, int i, int j) {
        if (nums.find(i) == nums.end())
            nums[i] = unordered_map<int, set<int>>();
        nums[i][j].insert(node->val);
        if (node->left)
            Traverse(node->left, i - 1, j + 1);
        if (node->right)
            Traverse(node->right, i + 1, j + 1);
    }
};