class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,vector<int>> pos;

        for (int i = 0;i<nums.size();++i){
            if (pos.find(nums[i]) == pos.end()){
                vector<int> st;
                st.push_back(i);
                pos[nums[i]] = st;
            }else{
                pos[nums[i]].push_back(i);
            }
        }

        vector<int> res;
        for (const auto& p : pos){
            if (pos.find(target - p.first) != pos.end()){
                if((target - p.first) == p.first){
                    if(p.second.size()>1){
                        res.push_back(p.second[0]);
                        res.push_back(p.second[1]);
                        break;
                    }
                }else{
                    res.push_back(p.second[0]);
                    res.push_back(pos[target-p.first][0]);
                    break;
                }
            }
        }
        return res;
    }
};