class Solution {
public:
    int f(vector<vector<int>>& arr, vector<vector<int>>& dp,int n , int m ){
        if(n<0 || m<0 || arr[n][m]==1){
            return 0;
        }
        else if(n==0 && m==0)return dp[n][m]=1;
        
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        
        
        return dp[n][m]=f(arr,dp,n,m-1)+f(arr,dp,n-1,m);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n = arr.size(), m= arr[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(arr,dp,n-1,m-1);
        // return dp[n-1][m-1];
    }
};