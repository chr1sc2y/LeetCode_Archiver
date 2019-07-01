class Solution:
    def reverseVowels(self, s: str) -> str:
        vowel = set('aeiouAEIOU')
        i, j = 0, len(s) - 1
        while i < j:
            if s[i] in vowel and s[j] in vowel:
                s = s[:i] + s[j] + s[i + 1:j] + s[i] + s[j + 1:]
                i += 1
                j -= 1
            elif s[i] in vowel:
                j -= 1
            elif s[j] in vowel:
                i += 1
            else:
                i += 1
                j -= 1
        return s