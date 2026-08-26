class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        pos = 0
        i = 0
        while i < len(nums):
            if nums[i]:
                nums[pos], nums[i] = nums[i], nums[pos]
                pos+=1
            i+=1
        
