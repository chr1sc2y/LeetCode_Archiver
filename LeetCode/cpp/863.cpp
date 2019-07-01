class Solution {
public:
    vector<int> distanceK(TreeNode *root, TreeNode *target, int K) {
        unordered_map<int, vector<int>> graph;
        unordered_set<int> tra;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty()) {
            root = que.front();
            que.pop();
            if (root->left) {
                graph[root->val].push_back(root->left->val);
                graph[root->left->val].push_back(root->val);
                que.push(root->left);
            }
            if (root->right) {
                graph[root->val].push_back(root->right->val);
                graph[root->right->val].push_back(root->val);
                que.push(root->right);
            }
        }
        vector<int> ret;
        vector<int> v;
        ret.push_back(target->val);
        int size = 1;
        while (K > 0) {
            for (auto iter:ret) {
                for (auto i : graph[iter]) {
                    if (tra.find(i) != tra.end())
                        continue;
                    v.push_back(i);
                }
                tra.insert(iter);
            }
            ret = v;
            v.clear();
            --K;
        }
        return ret;
    }
};