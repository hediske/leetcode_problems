class Solution {
public:

    int dfs(int i , int j ,vector<vector<bool>>& status ,vector<vector<int>>& grid){
        
        int im = grid.size();
        int jm= grid[0].size();
        if((i<0) || (i>=im) || (j<0) || (j>=jm)){
            return 0;
        }
        if(grid[i][j]==0){
            return 0;
        }

        if(status[i][j] == true){
            return 0;
        }

        int res = 1;

        status[i][j] = true;
       res += dfs(i+1,j,status,grid) + dfs(i-1,j,status,grid) + dfs(i,j+1,status,grid) +  dfs(i,j-1,status,grid);

       return res;


    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> status (m,vector<bool>(n,false));
        int mx =0;
        for (int i =0;i<m;i++){
            for (int j=0;j<n;j++){  
                if( (status[i][j] == false)  &&  (grid[i][j]==1)){
                    mx = max(mx,dfs(i,j,status,grid));
                }
            }
        }
        return mx;
    }
};