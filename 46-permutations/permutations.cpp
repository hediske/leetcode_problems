class Solution {
public:

    void backtrack(vector<int>& path, unordered_map<int ,bool>& status ,vector<int>& nums ,vector<vector<int>>& res){
        
        if (path.size() == nums.size()){
            res.push_back(path);
        }


        else{
            for (int i :nums){
                if(status[i] == false){
                    status[i] = true;
                    path.push_back(i);
                    backtrack(path,status,nums,res);
                    path.pop_back();
                    status[i] = false;
                }
            }

        }

    }

   

    vector<vector<int>> permute(vector<int>& nums) {
       
    vector<int> path;
    unordered_map<int ,bool> status;
    for (int i : nums){
        status[i] = false;
    }
    vector<vector<int>> res;
    backtrack(path,status,nums,res);
    return res;
    }
};