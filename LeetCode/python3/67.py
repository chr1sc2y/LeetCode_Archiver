class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if len(a) < len(b):
            a, b = b, a
        a = "0" + a
        i, j = len(a) - 1, len(b) - 1
        residual = 0
        while j >= 0:
            temp = ord(a[i]) + ord(b[j]) - 2 * ord('0') + residual
            residual = temp // 2
            a = a[:i] + str(temp % 2) + a[i + 1:]
            i -= 1
            j -= 1
        while i >= 0:
            temp = ord(a[i]) - ord('0') + residual
            residual = temp // 2
            a = a[:i] + str(temp % 2) + a[i + 1:]
            i -= 1
        return a if a[0] == '1' else a[1:]
