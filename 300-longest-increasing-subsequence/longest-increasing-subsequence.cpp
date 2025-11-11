class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp (nums.size());
        dp[0] =0;
        int m = 0;
        for (int i = 0;i<nums.size();i++){
            int add = 0;
            for (int j=0;j<i;j++){
                if((nums[j]<nums[i])){
                    add = max(add,dp[j]);
                }
            }
            dp[i] = 1 + add;
            m = max(dp[i],m);
        }
        return m;
    }
};