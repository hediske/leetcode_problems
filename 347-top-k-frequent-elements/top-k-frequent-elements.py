class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = Counter(nums)
        
        heap = []
        for key in counter.keys():

            heapq.heappush(heap,(counter[key],key))
            
            if len(heap)>k:
                heapq.heappop(heap)
        
        return [elem[1] for elem in heap]
