int M=10000000;
class Solution {
public:
    
    int f(vector<vector<int>>& grid,vector<vector<vector<int>>>&dp, int i , int j,int x){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())return 0;
         x^=grid[i][j];
        if(i==0 && j==0)return x==0;
        if(dp[i][j][x]!=-1)return dp[i][j][x];
        return dp[i][j][x]= (f(grid,dp,i-1,j,x) || f(grid,dp,i,j-1,x));
    }
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size(),m =grid[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(1024, -1)));
        for(int i =0 ; i<1024; i++){
            if(f(grid,dp,n-1,m-1,i)){
                return i;
            }
        }
        return 24;
        // return f(grid,dp,n-1,m-1);
    }
};
/*
26 24 3
2  22 17

*/