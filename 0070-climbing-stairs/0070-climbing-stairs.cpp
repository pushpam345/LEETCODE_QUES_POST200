vector<int> dp(45,0);
class Solution {
public:

    int f(int n ){
        if(n==1 || n==2){
            return dp[n-1]=n;
        }
        else if(dp[n-1]!=0)return dp[n-1];
        else{
            return dp[n-1]=f(n-1)+f(n-2);
        }
    }
    int climbStairs(int n) {
        return f(n);
    }
};