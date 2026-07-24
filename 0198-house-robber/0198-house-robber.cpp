vector<int> dp(100,0);
class Solution {
public:
    int f(vector<int> & nums,vector<int> & dp, int n ){
        if(n<0)return 0;
        if(n==0)return dp[0]=nums[0];
        if (dp[n]!=-1)return dp[n];
        int pick= nums[n]+f(nums,dp, n-2);
        int not_pick=f(nums,dp, n-1);
        return dp[n]=max(pick,not_pick);

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return f(nums,dp, nums.size()-1);
        
    }
};