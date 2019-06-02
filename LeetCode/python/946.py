class Solution(object):
    def validateStackSequences(self, pushed, popped):
        """
        :type pushed: List[int]
        :type popped: List[int]
        :rtype: bool
        """
        res = []
        i, n = 0, len(popped)
        for p in pushed:
            res.append(p)
            while res and i < n and res[-1] == popped[i]:
                i += 1
                res.pop()
        return i == n