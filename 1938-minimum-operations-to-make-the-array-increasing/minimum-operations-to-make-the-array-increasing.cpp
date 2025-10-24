class Solution {
public:
    int minOperations(vector<int>& nums) {
        long long c = nums[0];
        long long res = 0;
        for (int i = 1;i<nums.size(); i++){
            if(c>=nums[i]){
                res += c+1 - nums[i];
                nums[i] = c+1;
            }
            c = nums[i];
        }
        return res;
    }
};