# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        mx = n
        mn = 1

        while mn<=mx:
           median = mn + (mx - mn) // 2

           res = guess(median)

           if res == 0:
            return median

           if res == 1:
            mn = median +1

           if res == -1:
            mx = median -1

        return -1
        
            
        