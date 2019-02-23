class Solution {
public:
    int maxDepth(Node *root) {
        if (!root)
            return 0;
        int maxLen = 1;
        for (auto child : root->children)
            maxLen = max(maxLen, 1 + maxDepth(child));
        return maxLen;
    }
};
