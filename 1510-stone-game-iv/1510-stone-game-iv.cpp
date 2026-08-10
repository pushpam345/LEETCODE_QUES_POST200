
class Solution {
public:
    bool f(int n, vector<int> &dp){
        if(n==0)return 0;
        if(dp[n-1]!=-1)return dp[n];
        for(int i =1 ; i<=316;i++){
            if(i*i>n){
                break;
            }
            
            if(!f(n-i*i,dp))
            return dp[n-1]=1;
        }
        return 0;
    }
    bool winnerSquareGame(int n) {
        vector<int> dp(n,-1);
        return f(n,dp);
    }
};