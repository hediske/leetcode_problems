class Solution {
public:
    int hammingWeight(int n) {
        int res;
        while(n>0){
            if(n&1){
                res++;
            }
            n>>=1;
        }
        return res;
    }
};