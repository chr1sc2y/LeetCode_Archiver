class Solution:
    def indexPairs(self, text: str, words: List[str]) -> List[List[int]]:
        res = []
        for word in words:
            i = 0
            j = text.find(word, i)
            while j != -1:
                res.append([j, j + len(word) - 1])
                i = j + 1
                j = text.find(word, i)
        return sorted(res)