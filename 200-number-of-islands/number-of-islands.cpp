class Solution {
public:

    void dfs(int i,int j,vector<vector<bool>>& status,vector<vector<char>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        if((i<0) || (i>=m) || (j<0) || (j>=n) ){
            return;
        }
        if(status[i][j]==true){
            return;
        }

        if(grid[i][j]=='0'){
            return;
        }        
        status[i][j] = true;
        dfs(i+1,j,status,grid);
        dfs(i-1,j,status,grid);
        dfs(i,j+1,status,grid);
        dfs(i,j-1,status,grid);
    }


    int numIslands(vector<vector<char>>& grid) {

        int n = grid[0].size();
        int  m = grid.size();

        vector<vector<bool>> status(m,vector<bool>(n,false));
        int res = 0;
        for (int i = 0 ; i<grid.size();i++){
            for (int  j =0 ; j<grid[i].size();j++){ 
                
                if((grid[i][j]=='1') && (status[i][j] == false)){
                    dfs(i,j,status,grid);
                    res+=1;
                }
            }
        }
        return res;
    }
}; 