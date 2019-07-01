class Solution:
    def maximumSwap(self, num):
        """
        :type num: int
        :rtype: int
        """

        def supp(m):
            ret = 0
            while len(m) > 0:
                ret = ret*10 + m[-1]
                m = m[:len(m)-1]
            return ret

        m = []
        temp = num
        while temp != 0:
            m.append(temp % 10)
            temp //= 10
        latest = [-1 for i in range(10)]
        for i in range(len(m)-1,-1,-1):
            latest[m[i]] = i
        for i in range(len(m)-1,-1,-1):
            for j in range(9, m[i], -1):
                if latest[j] != -1 and i > latest[j]:
                    m[i], m[latest[j]] = m[latest[j]], m[i]
                    return supp(m)
        return num
