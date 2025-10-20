class Solution {
public:

    bool is_permutation(unordered_map<char,int> MP, unordered_map<char,int> current_mp)
{
    if (MP.size() != current_mp.size() ){
        return false;
    }

    for (const auto& pair : MP){
        if (pair.second != current_mp[pair.first]){
            return false;
        }
    }
    return true;
}

    bool checkInclusion(string s1, string s2) {
        
        unordered_map<char,int> MP;
        unordered_map<char,int> current_mp;
        
        if(s1.size()>s2.size()){
            return false;
        }
        for (char c : s1){
            if(MP.find(c) == MP.end()){
                MP[c] = 1;
            }
            else{
            MP[c]= MP[c] + 1;
            }
        }

        int l1 = s1.size();
        int l2 = s2.size();

        int i= 0;

        for (int j =0;j<l1;j++){
            char c = s2[j];
            if(current_mp.find(c) == current_mp.end()){
                current_mp[c] = 1;
            }else{
            current_mp[c] ++;
            }
        }


        while (i<=l2-l1){


            if(is_permutation(MP,current_mp)){
                return true;
            }
            char c_rm = s2[i];
            char c_add = s2[i+l1];

            if (current_mp[c_rm] == 1){
                current_mp.erase(c_rm);
            }
            else{
                current_mp[c_rm] = current_mp[c_rm] - 1;
            }

            if (current_mp.find(c_add) == current_mp.end()){
                current_mp[c_add] = 1;
            } else{

                current_mp[c_add]+=1;
            }
            i++;
        }

        return false;
    }
};