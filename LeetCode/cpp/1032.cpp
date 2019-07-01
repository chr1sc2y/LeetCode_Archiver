class StreamChecker {
    class TrieNode {
    public:
        bool end;
        vector<TrieNode *> sub;

        TrieNode() : end(false), sub(26, nullptr) {};
    };

public:
    TrieNode *trie;
    string cache;

    void Construct(string &word) {
        auto root = this->trie;
        for (int i = 0; i < word.size(); ++i) {
            if (!root->sub[word[i] - 'a'])
                root->sub[word[i] - 'a'] = new TrieNode();
            root = root->sub[word[i] - 'a'];
        }
        root->end = true;
    }

    StreamChecker(vector<string> &words) {
        trie = new TrieNode();
        for (auto word:words) {
            reverse(word.begin(), word.end());
            Construct(word);
        }
    }

    bool query(char letter) {
        cache += letter;
        TrieNode *node = trie;
        for (int i = cache.size() - 1; i >= 0; --i) {
            if (!node->sub[cache[i] - 'a'])
                return false;
            node = node->sub[cache[i] - 'a'];
            if (node->end)
                return true;
        }
        return false;
    }

};
