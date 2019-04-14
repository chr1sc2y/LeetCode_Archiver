class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        x = 0
        for m in nums:
            x ^= m
        s = 1
        while (s & x) == 0:
            s <<= 1
        ret = [0, 0]
        for m in nums:
            if (m & s) == 0:
                ret[0] ^= m
            else:
                ret[1] ^= m
        return ret
    