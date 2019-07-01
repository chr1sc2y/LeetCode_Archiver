class Solution:
    def videoStitching(self, clips: List[List[int]], T: int) -> int:
        clips.sort()
        res, start, end, i = 0, 0, 0, 0
        while end < T:
            while i < len(clips) and clips[i][0] <= start:
                end = max(end, clips[i][1])
                i += 1
            if start == end:
                return -1
            res += 1
            start = end
        return res
