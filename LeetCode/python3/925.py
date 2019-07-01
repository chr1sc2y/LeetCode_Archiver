class Solution:
    def isLongPressedName(self, name, typed):
        """
        :type name: str
        :type typed: str
        :rtype: bool
        """
        i, j, n, t = 0, 0, len(name), len(typed)
        while i < n and j < t:
            if name[i] == typed[j]:
                i += 1
                j += 1
            else:
                j += 1
        if i == n:
            return True
        return False