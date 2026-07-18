class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi = INT_MIN;
        int ans =1;
        for(auto x: nums){
            mini=min(mini, x);
            maxi=max(maxi,x);
            ans=gcd(mini,maxi);

        }
        return ans ;
        
    }
};