class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = collections.Counter(nums)
        min_heap = []
        for key, value in counter.items():
            if len(min_heap) < k or min_heap[0] < value:
                heapq.heappush(min_heap, value)
            if len(min_heap) > k:
                heapq.heappop(min_heap)
        ret = []
        for key,value in counter.items():
            if value >= min_heap[0]:
                ret.append(key)
        return ret