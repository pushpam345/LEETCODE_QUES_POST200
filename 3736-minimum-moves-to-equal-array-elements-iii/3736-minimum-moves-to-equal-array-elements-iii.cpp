class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0, maxi=*max_element(nums.begin(), nums.end());
        for(auto & x:nums)ans+=(maxi-x);
        return ans ;
    }
};