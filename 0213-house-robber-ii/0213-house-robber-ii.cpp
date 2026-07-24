class Solution {
public:
    int  f1(vector<int> & nums, vector<int> & dp,int n ){
        if( n <0 ){
            return 0;
        }
        if(n==0){
            return dp[n]=nums[0];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int pick =nums[n]+f1(nums,dp,n-2);
        int notpick= f1(nums,dp, n-1);
        return dp[n]=max(pick, notpick);
    }
        int  f2(vector<int> & nums,vector<int> & dp, int n ){
        if( n <1 ){
            return 0;
        }
        if(n==1){
            return dp[n]=nums[1];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int pick =nums[n]+f2(nums,dp,n-2);
        int notpick= f2(nums,dp, n-1);
        return dp[n]=max(pick, notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        return max(f1(nums,dp1, n-2), f2(nums,dp2, n-1));
    }
};