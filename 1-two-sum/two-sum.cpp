class Solution {
public:
    unordered_map < int , vector<int> > positions ; 

    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i<nums.size(); i++){
            if(positions.find(nums[i]) == positions.end()){
                vector<int> v ; 
                v.push_back(i);
                positions[nums[i]] = v;
            }else{
                positions[nums[i]].push_back(i);
            }
        }




        vector<int> res;

        for (auto& elem : positions){
            int value = target - elem.first;
            if(positions.find(value) != positions.end()){
                
                if(value != elem.first){
                    res.push_back(positions[elem.first][0]);
                    res.push_back(positions[value][0]);
                    break;
                }
                else{
                    if(positions[value].size()>=2){
                        res.push_back(positions[value][0]);
                        res.push_back(positions[value][1]);
                        break;                    
                    }
                }
            }
        }
        return res;
    }
};