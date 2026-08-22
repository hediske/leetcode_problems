class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        pos = {}

        for i in range(len(nums)):
            complement   = target - nums[i]
            if complement in pos:
                return [pos[complement],i]
            pos[nums[i]] = i
        
        return []