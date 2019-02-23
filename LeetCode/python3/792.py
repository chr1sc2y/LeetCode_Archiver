class Solution:
    def numMatchingSubseq(self, S: 'str', words: 'List[str]') -> 'int':
        str = {}
        for s in range(len(S)):
            if S[s] not in str:
                str[S[s]] = []
            str[S[s]].append(s)
        total = 0
        for word in words:
            sub, exist = -1, True
            for w in word:
                if w not in str:
                    exist = False
                    break
                x, y, mid = 0, len(str[w]), 0
                while x < y:
                    mid = x + (y - x) // 2
                    if str[w][mid] > sub:
                        y = mid
                    else:
                        x = mid + 1
                if x == len(str[w]):
                    exist = False
                    break
                sub = str[w][y]
            if exist:
                total += 1
        return total