class Solution {
public:
    TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
        return Traverse(nums, 0, nums.size());
    }

    TreeNode *Traverse(vector<int> &nums, int &&i, int &&j) {
        if (i >= j)
            return nullptr;
        auto maxNum = max_element(nums.begin() + i, nums.begin() + j);
        int maxI = distance(nums.begin(), maxNum);
        TreeNode *curr = new TreeNode(*maxNum);
        curr->left = Traverse(nums, i + 0, maxI + 0);
        curr->right = Traverse(nums, maxI + 1, j + 0);
        return curr;
    }
};