class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        d = defaultdict(set)
        d[0] = {-1}
        result = ""
        prefix = 0
        for i in range(len(s)):
            c = s[i]
            if c == '1':
                prefix +=1
            complement = prefix - k
            for candidate in d[complement]:
                beau_string = s[candidate+1:i+1]
                if not result:
                    result = beau_string
                else:
                    if len(beau_string)< len(result):
                        result = beau_string
                    elif len(beau_string) == len(result) and beau_string<result:
                        result = beau_string


            d[prefix].add(i)

        return result

