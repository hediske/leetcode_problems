class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        long long m = 1 << 31;
        return((m%n == 0));
    }
};