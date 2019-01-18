class Solution {
public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> order;
        if (!root)
            return order;
        queue<Node *> que;
        que.push(root);
        while (!que.empty()) {
            vector<int> temp;
            auto len = que.size();
            for (int i = 0; i < len; ++i) {
                Node *currentNode = que.front();
                temp.push_back(currentNode->val);
                que.pop();
                for (auto child:currentNode->children)
                    que.push(child);
            }
            order.push_back(temp);
        }
        return order;
    }
};