class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        unordered_map<char,int> mp;
        int m = 0;

        for (int end = 0 ; end< s.size(); end++){
            if(mp.find(s[end]) != mp.end()){
                start = max(start, mp[s[end]] + 1);
            }
            m = max(m,end-start+1);

            mp[s[end]] = end;
        }
        return m;
    }

};