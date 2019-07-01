class Solution:
    def subarraysDivByK(self, A, K):
        """
        :type A: List[int]
        :type K: int
        :rtype: int
        """
        count = {0: 1}
        prefix, ret = 0, 0
        for a in A:
            prefix = (prefix + a) % K
            if prefix < 0:
                prefix += K
            if prefix in count:
                ret += count[prefix]
            else:
                count[prefix] = 0
            count[prefix] += 1
        return ret