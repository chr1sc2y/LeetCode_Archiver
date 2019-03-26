class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        ret = []
        for x in range(left, right + 1):
            y = x
            while y > 0:
                z = y % 10
                if z == 0 or x % z != 0:
                    break;
                y //= 10
            if y == 0:
                ret.append(x)
        return ret