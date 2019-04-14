class Solution {
public:
    TreeNode *recoverFromPreorder(string S) {
        int pos = 0, back = 0;
        return Construct(0, S, pos, back);
    }

    TreeNode *Construct(int level, string &S, int &pos, int &back) {
        if (pos >= S.size())
            return nullptr;
        string str;
        int val = 0;
        while (pos < S.size() && S[pos] != '-')
            str += S[pos++];
        val = stoi(str);
        auto curr = new TreeNode(val);
        int len = 0;
        while (pos < S.size() && S[pos] == '-')
            ++len, ++pos;
        if (len != level + 1) {
            back = len;
            return curr;
        }
        curr->left = Construct(level + 1, S, pos, back);
        if (level == back - 1)
            curr->right = Construct(level + 1, S, pos, back);
        return curr;
    }
};
