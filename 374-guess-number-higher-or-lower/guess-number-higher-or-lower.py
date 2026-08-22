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
        while True:
            value = random.randint(mn,mx)
            res = guess(value)
            if res == 0:
                return value
            if res == -1:
                mx = value
            else:
                mn = value
        return 0
            
        