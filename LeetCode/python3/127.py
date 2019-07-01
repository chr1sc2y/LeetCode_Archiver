class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        n, count = len(beginWord), 0
        dict = {}
        for word in wordList:
            dict[word] = 1
        queue = [beginWord]
        size = 1
        word = beginWord
        while len(queue) > 0:
            word = queue[0]
            if word == endWord:
                break
            queue = queue[1:]
            for i in range(len(word)):
                temp = word
                for j in range(26):
                    if chr(ord('a') + j) == word[i]:
                        continue
                    temp = temp[:i] + chr(ord('a') + j) + temp[i + 1:]
                    if temp in dict:
                        queue.append(temp)
                        del dict[temp]
            size -= 1
            if size == 0:
                size = len(queue)
                count += 1
        return count + 1 if word == endWord else 0
