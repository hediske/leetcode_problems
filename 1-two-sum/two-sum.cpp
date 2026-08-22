class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> pos;
        for (int i =0; i<nums.size();++i ){
            if(pos.find(target - nums[i]) != pos.end()){
                res.push_back(i);
                res.push_back(pos[target-nums[i]]);
                break;
            }
            pos[nums[i]] = i;
        }
        return res;
    }
    

};