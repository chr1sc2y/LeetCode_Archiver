class Codec {
public:

    vector<int> preorderTraverse(TreeNode *root) {
        if (!root)
            return {};
        vector<int> ret;
        stack<TreeNode *> s;
        s.push(root);
        while (!s.empty()) {
            root = s.top();
            ret.push_back(root->val);
            s.pop();
            if (root->right) s.push(root->right);
            if (root->left) s.push(root->left);
        }
        return ret;
    }

    vector<int> inorderTraverse(TreeNode *root) {
        if (!root)
            return {};
        vector<int> ret;
        stack<TreeNode *> s;
        while (root || !s.empty()) {
            if (root) {
                s.push(root);
                root = root->left;
            } else {
                root = s.top();
                ret.push_back(root->val);
                s.pop();
                root = root->right;
            }
        }
        return ret;
    }


    // Encodes a tree to a single string.
    string serialize(TreeNode *root) {
        string ret;
        vector<int> pre = preorderTraverse(root);
        vector<int> in = inorderTraverse(root);

        for (auto p: pre)
            ret += to_string(p) + ' ';
        ret += '.';
        for (auto i: in)
            ret += to_string(i) + ' ';
        ret += '.';

        return ret;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data) {
        vector<int> pre;
        vector<int> in;
        int i = 0;
        while (data[i] != '.' && i < data.size()) {
            int temp = 0;
            while (data[i] != ' ') {
                temp = temp * 10 + (data[i] - '0');
                ++i;
            }
            pre.push_back(temp);
            ++i;
        }
        ++i;
        while (data[i] != '.' && i < data.size()) {
            int temp = 0;
            while (data[i] != ' ') {
                temp = temp * 10 + (data[i] - '0');
                ++i;
            }
            in.push_back(temp);
            ++i;
        }

        return BuildTree(pre, 0, pre.size() - 1, in, 0, in.size() - 1);
    }

    TreeNode *BuildTree(vector<int> &pre, int i, int j, vector<int> &in, int m, int n) {
        if (i > j || m > n)
            return nullptr;
        auto root = new TreeNode(pre[i]);
        int x = m, y = n, index = (x + y) / 2;
        while (x <= y) {
            index = (x + y) / 2;
            if (in[index] == pre[i])
                break;
            else if (in[index] > pre[i])
                y = index - 1;
            else
                x = index + 1;
        }
        root->left = BuildTree(pre, i + 1, i + (index - m), in, m, index - 1);
        root->right = BuildTree(pre, i + (index - m) + 1, j, in, index + 1, n);
        return root;
    }

};