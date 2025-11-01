class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

            if ((!left )|| (!right)){
                return 0;
            }

            int msbl = floor(log2(left));
            int msbr = floor(log2(right));

            if (msbr!= msbl){
                return 0;
            }
            int i = 0;
            while(left != right){
                left >>=1;
                right>>=1;
                i++;
            }

            if (left==0){
                return 0;
            }

            return left <<=i;

    }
};