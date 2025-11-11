class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector <int> dp(n,0);   
        dp[0] = nums[0];
        int max_v = dp[0];
        for (int i =1 ; i<n;i++){
            int m ;
            if(i==1){
                m = 0;
            }else if(i==2){
                m = dp[0];
            }else{
                m = max(dp[i-2],dp[i-3]);
            }
            dp[i]+=nums[i] + m;
            max_v = max(dp[i],max_v);
        }
        return max_v;
    }
};