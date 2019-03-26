class Solution:
    def constructRectangle(self, area: int) -> List[int]:
        ret = [-1e9, 1e9]
        low, high = 1, area
        while low <= high:
            high = area // low
            if area % low == 0 and abs(low - high) < abs(ret[0] - ret[1]):
                ret[0] = high;
                ret[1] = low;
            low += 1
        return ret
