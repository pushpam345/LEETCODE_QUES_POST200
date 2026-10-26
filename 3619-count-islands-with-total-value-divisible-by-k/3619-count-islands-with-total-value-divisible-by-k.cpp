class Solution {
public:
    long long   f(vector<vector<int>>& grid, int i , int j ){
        if( i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return 0;
        }
        if(grid[i][j]==0)return 0;
        long long  x= grid[i][j];
        grid[i][j]=0;
        return x+f(grid,i , j+1) + f(grid, i, j-1)+ f(grid , i+1, j)+ f(grid , i-1, j);
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m =grid[0].size();
        int ans =0 ;long long  sum =0;
        for(int i =0 ; i<n ; i++){
            for (int j =0 ; j<m ; j++){
                sum=-1;
                if(grid[i][j]!=0){
                    sum=0;
                    sum=f(grid, i , j);
                    ans+=(sum%k==0);
                }
            }
        }
        return ans ;

    }
};