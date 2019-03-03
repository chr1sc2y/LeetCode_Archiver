class Solution:
    def isValid(self, S: str) -> bool:
        while len(S) > 0:
            if S.find("abc") == -1:
                return False
            S = S.replace("abc", '')
        return True