class Solution {
public:
    bool canJump(vector<int>& nums) {
     int n = nums.size();
     vector<bool> dp(n,false);
     dp[0] = 0;
     int  m = 0;
     for (int i = 0 ;i<n;i++){
        if(i<=m){
            dp[i] = true;
        }
        if(dp[i]){
            m = max(m,(i + nums[i]));

        }
     }   


     return(dp[n-1]);
    }
};