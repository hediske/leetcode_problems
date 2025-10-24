class Solution {
public:


    void backtack(int n ,unordered_map<int,bool>& status, vector<int>& path , int& res){

        if (path.size() == n ){
           res++;
        }

        for (int i =1 ; i<=n ; i++){

            int size = path.size()+1;


            if((status[i] == false ) && ((size % i == 0) || (i % size == 0))){
                


                status[i] = true;
                path.push_back(i);

                backtack(n,status,path,res);

                status[i] = false;
                path.pop_back();
            }

        }



    }

    int countArrangement(int n) {
        vector<int> path ;
        unordered_map<int,bool> status;

        for (int i = 1; i <=n ; i++){
            status[i] = false;
        }

        int res = 0;


        backtack(n,status,path,res);
        return res;

    }
};