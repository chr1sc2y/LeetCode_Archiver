class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        num = 0
        jew = set(list(J))
        for s in S:
            if s in jew:
                num += 1
        return num