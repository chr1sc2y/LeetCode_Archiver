class Solution:
    def commonChars(self, A: List[str]) -> List[str]:
        dict = {}
        for c in range(ord('a'), ord('z') + 1):
            dict[chr(c)] = sys.maxsize
        for a in A:
            temp = {}
            for c in a:
                if c not in temp:
                    temp[c] = 1
                else:
                    temp[c] += 1
            for c in dict:
                if c not in temp:
                    dict[c] = 0
                else:
                    dict[c] = min(dict[c], temp[c])
        ret = []
        for c in dict:
            for i in range(dict[c]):
                ret.append(c)
        return ret