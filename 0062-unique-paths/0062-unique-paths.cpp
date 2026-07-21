class Solution {
public:
    int f(vector<vector<int>>& dp, int m, int n) {

        if (m == 0 || n == 0) {
            dp[m][n] = 1;
            return 1;
        } else if (dp[m][n] != 0) {
            return dp[m][n];
        } else {
            return dp[m][n] = f(dp, m - 1, n) + f(dp, m, n - 1);
        }
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 0));
        //    for(int i=0; i<m ; i++){
        //     for(int j =0; j<n ; j++){
        //         if(i==0 || j==0){
        //             dp[i][j]=1;
        //         }
        //         else{
        //             dp[i][j]=dp[i-1][j]+dp[i][j-1];
        //         }
        //     }

        //    }
        f(dp, m - 1, n - 1);
        return dp[m - 1][n - 1];
    }
};