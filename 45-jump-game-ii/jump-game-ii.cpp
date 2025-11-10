class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),0) ;
        dp[0] = 0;
        int n = nums.size();

        for (int i = 0; i<nums.size();i++){
            for (int  j = 1 ; j <=nums[i] ; j++){
                if((i+j)>=n){
                    break;
                }
                if(dp[i+j] == 0){
                    dp[i+j] = dp[i] + 1;
                }
            }
        }

        return dp[nums.size()- 1];
    }
};