class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        int size = nums.size();
        return helper(nums, 0, size);
    }

    TreeNode *helper(vector<int> &nums, const int &head, const int &tail) {
        if (head >= tail)
            return nullptr;
        auto &&index = head + (tail - head) / 2;
        TreeNode *cur = new TreeNode(nums[index]);
        cur->left = helper(nums, head, index);
        cur->right = helper(nums, index + 1, tail);
        return cur;
    }
};