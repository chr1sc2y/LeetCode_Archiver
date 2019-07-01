class Solution:
    def powerfulIntegers(self, x, y, bound):
        """
        :type x: int
        :type y: int
        :type bound: int
        :rtype: List[int]
        """
        i, j = 0, 0
        ret = set()
        while x ** i < bound:
            res = x**i + y**j
            while res <= bound:
                ret.add(res)
                if y == 1:
                    break
                j += 1
                res = x**i + y**j
            if x == 1:
                break
            j = 0
            i += 1
        return list(ret)

