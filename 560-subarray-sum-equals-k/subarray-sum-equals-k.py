class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:

        d = defaultdict(int)
        d[0] = 1
        prefix = 0
        result = 0
        for num in nums:
            prefix = num + prefix
            result += d[prefix - k]
            d[prefix] += 1

        return result
        

        