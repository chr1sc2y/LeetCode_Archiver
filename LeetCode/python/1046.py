class Solution(object):
    def lastStoneWeight(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """
        h = [-s for s in stones]
        heapq.heapify(h)
        while h:
            i = -heapq.heappop(h)
            if not h:
                return i
            i += heapq.heappop(h)
            if i != 0:
                heapq.heappush(h, -i)
        return -heapq.heappop(h) if h else 0
