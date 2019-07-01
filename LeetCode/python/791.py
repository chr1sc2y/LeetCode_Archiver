class Solution(object):
    def customSortString(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: str
        """
        counter = collections.Counter(T)
        res = ""
        for s in S:
            if s in counter:
                for i in range(counter[s]):
                    res += s
                counter[s] = 0
        for c, v in counter.items():
            for i in range(v):
                res += c
        return res