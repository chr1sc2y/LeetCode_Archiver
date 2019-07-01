class Solution(object):
    def rearrangeBarcodes(self, codes):
        """
        :type barcodes: List[int]
        :rtype: List[int]
        """
        n = len(codes)
        if n <= 2:
            return codes
        for i in range(n):
            j = i + 1
            while j < n and codes[j] == codes[i]:
                j += 1
            if j >= n:
                break
            codes[j], codes[i + 1] = codes[i + 1], codes[j]
        for i in range(n - 1, -1, -1):
            j = i - 1
            while j > -1 and codes[j] == codes[i]:
                j -= 1
            if j < 0:
                break
            codes[j], codes[i - 1] = codes[i - 1], codes[j]
        return codes
