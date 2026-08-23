class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        elems = set(nums)
        return len(nums) > len(elems)
        