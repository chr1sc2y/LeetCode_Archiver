class Trie:
    class TrieNode:
        def __init__(self):
            self.is_end = False
            self.next = [None for _ in range(26)]

    def __init__(self):
        self.root = self.TrieNode()

    def insert(self, word: str) -> None:
        node = self.root
        for w in word:
            if not node.next[ord(w) - ord('a')]:
                node.next[ord(w) - ord('a')] = self.TrieNode()
            node = node.next[ord(w) - ord('a')]
        node.is_end = True

    def search(self, word: str, search: bool = True) -> bool:
        node = self.root
        for w in word:
            if node.next[ord(w) - ord('a')]:
                node = node.next[ord(w) - ord('a')]
            else:
                return False
        return node.is_end if search else True

    def startsWith(self, prefix: str) -> bool:
        return self.search(prefix, False)
