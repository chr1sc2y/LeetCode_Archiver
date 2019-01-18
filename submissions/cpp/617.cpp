class Solution {
public:
    TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2) {
        if (!t1)
            return t2;
        else if (!t2)
            return t1;
        queue<TreeNode *> q1, q2;
        q1.push(t1);
        q2.push(t2);
        while (!q1.empty()) {
            TreeNode *temp1 = q1.front(), *temp2 = q2.front();
            q1.pop();
            q2.pop();
            if (temp1) {
                q1.push(temp1->left);
                q1.push(temp1->right);
                q2.push(temp2 ? temp2->left : nullptr);
                q2.push(temp2 ? temp2->right : nullptr);
            }
            if (temp1 && temp2) {
                temp1->val += temp2->val;
                if (!temp1->left)
                    temp1->left = temp2->left;
                if (!temp1->right)
                    temp1->right = temp2->right;
            }
        }
        return t1;
    }
};