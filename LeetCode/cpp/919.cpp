class CBTInserter {
    vector<TreeNode *> nodeVector;
public:
    CBTInserter(TreeNode *root) {
        nodeVector.clear();
        if (root) nodeVector.push_back(root);
        int i = 0;
        while (true) {
            if (nodeVector[i]->left)
                nodeVector.push_back(nodeVector[i]->left);
            else
                break;
            if (nodeVector[i]->right)
                nodeVector.push_back(nodeVector[i]->right);
            else
                break;
            ++i;
        }
    }

    int insert(int v) {
        auto &&size = nodeVector.size(), &&parent = (size - 1) / 2;
        TreeNode *child = new TreeNode(v);
        if (size % 2 == 0)
            nodeVector[parent]->right = child;
        else
            nodeVector[parent]->left = child;
        nodeVector.push_back(child);
        return nodeVector[parent]->val;
    }

    TreeNode *get_root() {
        return nodeVector.front();
    }
};