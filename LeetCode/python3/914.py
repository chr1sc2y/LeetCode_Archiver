class Solution:
    def hasGroupsSizeX(self, deck):
        """
        :type deck: List[int]
        :rtype: bool
        """
        from fractions import gcd
        from collections import Counter
        from functools import reduce
        vals = Counter(deck).values()
        g = reduce(gcd, vals)
        return g >= 2
