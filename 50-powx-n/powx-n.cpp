class Solution {
public:
    double myPow(double x, int n) {
       
       double res = 1;
       long long N = n ;
       if (n<0){
            x = 1/x;
            N = -N;
       }
        while(N>0){
            if(N & 1){
                res *=x;
            }
            N>>=1;
            x= x * x ;
        }
        return res;
    }
};