class Solution {
public:
    vector<double> averageOfLevels(TreeNode *root) {
        vector<double> average;
        if (!root)
            return average;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty()) {
            int len = que.size();
            double ave = 0.0;
            for (int i = 0; i < len; ++i) {
                TreeNode *temp = que.front();
                ave += temp->val;
                que.pop();
                if (temp->left) que.push(temp->left);
                if (temp->right) que.push(temp->right);
            }
            average.push_back(ave / len);
        }
        return average;
    }
};