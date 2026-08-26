class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:

        i = 0
        n_val = 0

        while i < len(nums) - n_val:
            if nums[i] == val:
                nums[i], nums[len(nums) - 1 - n_val] = nums[len(nums) - 1 - n_val], nums[i]
                n_val +=1
            else:
                i+=1

        return len(nums) - n_val


        