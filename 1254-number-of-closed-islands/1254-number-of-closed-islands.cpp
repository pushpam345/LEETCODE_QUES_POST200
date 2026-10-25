class Solution {
public:
    bool f(vector<vector<int>>& grid,int i , int j ){
        if(i<0 || i>=grid.size()||j<0 || j>=grid[0].size())return 0;
        if(grid[i][j])return 1;
        grid[i][j]=1;
        
        return f(grid, i+1,j) & f(grid, i-1,j) & f(grid, i,j+1) & f(grid, i,j-1) ;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();int m = grid[0].size();int ans=0;
        for(int i =0 ;i<n ; i++){
            for(int j =0 ; j<m; j++){
                 if(grid[i][j]==0){
                    ans +=(f(grid, i , j));
                 }
            }
        }
        return ans;
    }
};