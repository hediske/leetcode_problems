class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>> mp;
        for (string str:strs)  {
            string sorted = str;
            sort(sorted.begin(),sorted.end());
            mp[sorted].push_back(str);
        }
        vector<vector<string>> res;
        for (auto elem : mp){
            res.push_back(elem.second);
        }
        return res;
    }
};