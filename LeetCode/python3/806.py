class Solution:
    def numberOfLines(self, widths: List[int], S: str) -> List[int]:
        line, last_width = 1, 0
        for s in S:
            width = widths[ord(s) - ord('a')]
            if last_width + width <= 100:
                last_width += width
            else:
                last_width = width
                line += 1
        return [line, last_width]
