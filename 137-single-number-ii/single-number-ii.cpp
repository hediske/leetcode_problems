class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> count(32, 0);
        
        for (int n : nums) {
            unsigned int j = (unsigned int)n;  // cast to unsigned to handle shifting negatives
            for (int i = 0; i < 32; i++) {
                if (j & (1u << i)) {
                    count[i]++;
                }
            }
        }

        int res = 0;
        for (int i = 0; i < 32; i++) {
            if (count[i] % 3 != 0) {
                res |= (1 << i);
            }
        }

        return res;
    }
};
