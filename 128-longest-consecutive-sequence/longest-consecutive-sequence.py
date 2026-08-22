class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        myset = set(nums)

        result = 0
        current_streak = 0
        element = 0

        for num in myset:
            
            if num - 1 not in myset:
                elem = num
                current_streak +=1
                while(elem + 1 in myset):
                    elem = elem +1
                    current_streak +=1 

            result = max(current_streak,result)
            current_streak = 0

        return result


