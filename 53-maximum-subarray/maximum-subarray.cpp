class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum  =INT_MIN;
        int start = 0;
        int end = 0;
        int curr = 0;

        while(end<nums.size()){
            curr += nums[end];
            end++;
            sum = max(sum , curr);
            if(curr <0){
                start = end;
                curr = 0;
            }
        }
        return sum;
    }
};