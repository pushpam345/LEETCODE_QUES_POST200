class Solution {
public:
    int f(vector<vector<int>>& grid,vector<vector<int>>& dp, int i , int j ){
        if(i<0 || j<0 ){
            return 40001;
        }
        if(i==0 && j==0){
            return dp[i][j]=grid[0][0];
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int left= grid[i][j]+f(grid,dp,i,j-1);
        int right = grid[i][j]+f(grid,dp,i-1,j);
        return dp[i][j]=min(left, right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int i = grid.size();
        int j = grid[0].size();

        vector<vector<int>> dp(i,vector<int>(j,-1));

        return f(grid,dp, i-1, j-1);
    }
};