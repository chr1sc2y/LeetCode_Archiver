class Trie {
    struct TrieNode {
        vector<TrieNode *> next;
        bool is_end;

        TrieNode() : next(vector<TrieNode *>(26, nullptr)), is_end(false) {}
    };

    TrieNode *root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        auto node = root;
        for (auto c:word) {
            if (!node->next[c - 'a'])
                node->next[c - 'a'] = new TrieNode();
            node = node->next[c - 'a'];
        }
        node->is_end = true;
    }

    bool search(string word, bool search = true) {
        auto node = root;
        for (auto p:word) {
            if (node->next[p - 'a'])
                node = node->next[p - 'a'];
            else
                return false;
        }
        return search ? node->is_end : true;
    }

    bool startsWith(string prefix) {
        return search(prefix, false);
    }
};
