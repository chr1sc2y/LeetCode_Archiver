class Solution {
public:
    vector<int> nodes;
    int index;
    vector<int> voyage;
    bool match = true;

    vector<int> flipMatchVoyage(TreeNode *root, vector<int> &voyage) {
        if (!root || voyage.size() == 0)
            return {};
        this->voyage = voyage;
        nodes.clear();
        index = 0;
        helper(root);
        if (!match)
            return {-1};
        return nodes;
    }

    void helper(TreeNode *root) {
        if (!root)
            return;
        if (root->val != voyage[index] || !match) {
            match = false;
            return;
        }
        ++index;
        if (root->left && root->left->val != voyage[index]) {
            nodes.push_back(root->val);
            helper(root->right);
            helper(root->left);
        } else {
            helper(root->left);
            helper(root->right);
        }
    }
};
