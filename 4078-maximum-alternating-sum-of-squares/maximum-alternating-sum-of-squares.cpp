class Solution {
public:

    static bool f(int a,int b){
        return (abs(a)>abs(b));
    }
        
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),f);
        int i = 0;
        int  j = nums.size()-1;
        long long res = 0;
        while(j>i){
            res = res + nums[i]*nums[i] - nums[j]*nums[j];
            i++;
            j--;
        }
        if(i==j){
                res = res + nums[i]*nums[i];
        }
        return res;
        
    }

    
};