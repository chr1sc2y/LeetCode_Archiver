class Solution(object):
    def indexPairs(self, text, words):
        """
        :type text: str
        :type words: List[str]
        :rtype: List[List[int]]
        """
        res = []
        for word in words:
            i = 0
            j = text.find(word, i)
            while j != -1:
                res.append([j, j + len(word) - 1])
                i = j + 1
                j = text.find(word, i)
        return sorted(res)