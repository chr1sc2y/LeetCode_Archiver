class Solution:
    def validPalindrome(self, s: str) -> bool:
        def isPalindrome(str: str) -> bool:
            i, j = 0, len(str) - 1
            while i < j:
                if str[i] == str[j]:
                    i += 1
                    j -= 1
                else:
                    return False
            return True

        s = s.lower()
        m, n = 0, len(s) - 1
        while m < n:
            if s[m] == s[n]:
                m += 1
                n -= 1
            else:
                if isPalindrome(s[m + 1:n + 1]) or isPalindrome(s[m:n]):
                    return True
                else:
                    return False
        return True
