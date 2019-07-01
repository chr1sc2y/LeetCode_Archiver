class Solution:
    def partition(self, s: str) -> List[List[str]]:
        ret = []
        self.Backtrack(s, 0, [], ret)
        return ret

    def Backtrack(self, s, k, curr, ret):
        if k == len(s):
            ret.append([c for c in curr])
            return curr
        for i in range(k, len(s)):
            if self.IsPalindrome(s, k, i):
                curr.append(s[k:i + 1])
                curr = self.Backtrack(s, i + 1, curr, ret)
                curr.pop()
        return curr

    def IsPalindrome(self, s, i, j):
        while j > i:
            if s[i] != s[j]:
                return False
            i += 1
            j -= 1
        return True
