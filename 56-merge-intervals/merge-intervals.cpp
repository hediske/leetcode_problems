class Solution {
public:

    static bool greater (vector<int> a , vector<int> b){
        return (a[0]<b[0]);
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),greater);
        
        vector<vector<int>> res ;
        res.push_back(intervals[0]);
        int i = 0;

        for (int j=1 ; j<intervals.size(); j++){
            vector<int> elem = intervals[j];
            if((elem[0] >= res[i][0]) && (elem[0] <= res[i][1])  ){
                res[i][1] = max(elem[1],res[i][1]);
            }else{
                res.push_back(elem);
                i++;
            }
        }

        return res;
    }
};