class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        i, j = 0, len(s) - 1
        while i < j:
            if not s[i].islower() and not s[i].isdigit():
                i += 1
                continue
            if not s[j].islower() and not s[j].isdigit():
                j -= 1
                continue
            if s[i] == s[j]:
                i += 1
                j -= 1
            else:
                return False
        return True
