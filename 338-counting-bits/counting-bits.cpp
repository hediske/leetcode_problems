class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vc;
        for (int i = 0 ; i<=n ; i++){
            vc.push_back(__builtin_popcount(i));
        }
        return vc;
    }
};