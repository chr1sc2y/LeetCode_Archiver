class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        def combin(x, str):
            if x == len(digits):
                ret.append(str)
                return
            for i in range(len(dict[digits[x]])):
                str += dict[digits[x]][i]
                combin(x + 1, str)
                str = str[:-1]

        if len(digits) == 0:
            return []
        dict = {}
        c = 'a'
        for i in range(2, 10):
            dict[chr(i + ord('0'))] = []
            k = 3
            if i == 7 or i == 9:
                k = 4
            for j in range(k):
                dict[chr(i + ord('0'))].append(c)
                c = chr(ord(c) + 1)
        ret = []
        combin(0, "")
        return ret
