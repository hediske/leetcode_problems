class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res ;
        for (int i = 0 ; i< pow(2,n) ; i++){
            bitset<11> bt(i);
            vector<int> vect ;
            for (int i = 0 ; i< n ; i++){
                if(bt[i]){
                    vect.push_back(nums[i]);
                }
            }
            res.push_back(vect);
        }
        return res;
    }
};