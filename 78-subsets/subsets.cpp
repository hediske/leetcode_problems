class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vct;
        for(int i = 0 ; i<pow(2,nums.size()) ; i++ ){
            bitset<10> bt(i);
            vector<int> v;
            for (int i = 0 ; i<nums.size() ; i++){
                if(bt[i] == 1){
                    v.push_back(nums[i]);
                }
            }
            vct.push_back(v);
        }
        return vct;
    }
};