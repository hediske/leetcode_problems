class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d_s = defaultdict(int)
        for c in s :
            d_s[c]+=1
        for c in t :
            d_s[c]-=1

        return set(d_s.values()) == {0}
        