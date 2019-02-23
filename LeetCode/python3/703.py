class KthLargest:

    def __init__(self, k: 'int', nums: 'List[int]'):
        self.k = k
        self.h = nums
        heapq.heapify(self.h)
        while len(self.h) > k:
            heapq.heappop(self.h)

    def add(self, val: 'int') -> 'int':
        heapq.heappush(self.h, val)
        if len(self.h) > self.k:
            heapq.heappop(self.h)
        return self.h[0]