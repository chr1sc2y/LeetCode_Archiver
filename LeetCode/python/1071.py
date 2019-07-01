class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        m, n = len(str1), len(str2)
        if m < n:
            return self.gcdOfStrings(str2, str1)
        for i in range(1, n + 1):
            if n % i != 0 or m % (n // i) != 0:
                continue
            gcd = str2[:n // i]
            s = len(gcd)
            flag = True
            for j in range(m // (n // i)):
                if str1[j * s: j * s + s] != gcd:
                    flag = False
                    break
            if flag:
                return gcd
        return ""
