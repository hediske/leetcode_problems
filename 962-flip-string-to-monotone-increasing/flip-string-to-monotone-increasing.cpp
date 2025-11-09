class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.size();

        vector<int> freqzero(n);
        vector<int> freqone(n);
        int cumzero = 0;
        int cumone = 0;
        for (int  i =0; i <s.size();i++){
            if((s[i]-'0') == 0){
                cumzero++;
            }else{
                cumone++;
            }
            freqzero[i] = cumzero;
            freqone[i] = cumone;
        }
        int  res = min(cumone,cumzero);
        for (int i = 0 ; i<n ; i++){
            int zs = cumzero - freqzero[i];
            int os = freqone[i];
            if(s[i] == '1'){
                os--;
            }
            res = min(res,os+zs);

        }

        return res;


    }
};