class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res =0;
        for (int i : nums){
            res ^=i;
        }
        int i = 0;
        int g1 = 0;
        int g2 = 0;
        vector<int> v;
        while(i<31){
            if(res & (1<< i)){
                break;
            }
            i++;
        }
        cout <<i;
        for (int elem:nums){
             if(elem & (1 << i)){
                g1 = g1 ^ elem;
            }else{
                g2 ^=elem;
             }
        }
        v.push_back(g1);
        v.push_back(g2);  
        return v;
    }
};