class Solution {
public:
    int f(vector<int>& arr,vector<int> &dp,int i ){
        if(i>=arr.size()){
            return 0;
        }
        if(dp[i]!=INT_MIN)return dp[i];
        int sum=0;
        int res=INT_MIN;
        for(int j =1; j<=3 && i+j<=arr.size(); j++){
            sum+=(arr[i+j-1]);
            res=max(res,sum-f(arr,dp,i+j));
        }
        return dp[i]=res;
    }
    string stoneGameIII(vector<int>& arr) {
        vector<int>dp(arr.size(),INT_MIN);
        int d=f(arr,dp,0);
        if(d>0)return "Alice";
        if(d==0)return "Tie";
        return "Bob";
    }
};