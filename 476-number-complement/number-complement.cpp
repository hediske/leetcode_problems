class Solution {
public:
    int findComplement(int num) {
        bitset<31> bt(num);
        bool found = false;
        for (int i = bt.size()-1; i>=0;i--){
            if((bt[i] == 1) ){
                if(!found){
                    found = true;
                }
                bt[i] = 0;
            }else{
                if(found){
                    bt[i] = 1;
                }
            }
        }
        return (int) bt.to_ulong();
    }
};