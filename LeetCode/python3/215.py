class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        min_heap = []
        for m in nums:
            if len(min_heap) < k or min_heap[0] < m:
                heapq.heappush(min_heap, m)
            if len(min_heap) > k:
                heapq.heappop(min_heap)
        return min_heap[0]