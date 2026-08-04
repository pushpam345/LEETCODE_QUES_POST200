class Solution {
public:
    int f(vector<int> &nums,vector<vector<int>> & dp, int sum, int j){
        if(j<0 || sum<0){
            return 0;
        }if(dp[sum][j]!=-1)return dp[sum][j];
        if(sum==nums[j])return dp[sum][j]= 1;
        return dp[sum][j]=f(nums,dp, sum,j-1 ) || f(nums,dp, sum-nums[j], j-1);
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(), nums.end(),0);
        int n =nums.size();if(sum%2==1)return 0;
        vector<vector<int>>dp(sum/2 +1,vector<int>(n,-1));
        return f(nums,dp,sum/2, n-1);
    }
};