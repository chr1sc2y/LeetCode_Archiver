class Solution {
public:
    vector<int> preorder(Node *root) {
        vector<int> order;
        preorder(root, order);
        return order;
    }

    void preorder(Node *root, vector<int> &order) {
        if (!root)
            return;
        order.push_back(root->val);
        for (auto child:root->children)
            preorder(child, order);
    }
};