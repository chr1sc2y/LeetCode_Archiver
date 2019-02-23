class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        if (!root)
            return {};
        vector<vector<int>> ret;
        bool even = false;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty()) {
            vector<int> supp = vector<int>();
            int size = static_cast<int>(que.size());
            while (size > 0) {
                auto curr = que.front();
                que.pop();
                if (!even)
                    supp.push_back(curr->val);
                else
                    supp.insert(supp.begin(), curr->val);
                if (curr->left)
                    que.push(curr->left);
                if (curr->right)
                    que.push(curr->right);
                --size;
            }
            ret.push_back(supp);
            even = !even;
        }
        return ret;
    }
};