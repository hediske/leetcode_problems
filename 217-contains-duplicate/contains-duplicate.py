class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        counts = Counter(nums)
        top = counts.most_common(1)
        return top[0][1] > 1