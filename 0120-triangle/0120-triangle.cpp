class Solution {
public:
    int f(int r, int c,vector<vector<int>>& arr,vector<vector<int>>& dp){
        if(r<0 || c<0 || c>=arr[r].size()){
            return 10001;
        }
        if(r==0 && c==0)return arr[0][0];
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
        int left=f(r-1,c-1, arr,dp);
        int right = f(r-1,c,arr,dp);
        return dp[r][c]=arr[r][c]+ min(left,right);
    }
    int minimumTotal(vector<vector<int>>& arr) {
      int r=arr.size();
      int c=arr[r-1].size();
      vector<vector<int>> dp(r,vector<int>(c,-1));
      if(r==1 && c==1)return arr[0][0];
      int ans=INT_MAX;
      for(int i =0 ; i<c; i++){
          ans = min(ans,f(r-1,i,arr,dp));
      } 
      return ans ;
    }
};