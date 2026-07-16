class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long ans =0; 
        vector<int> prefixgcd;
        int maxi=INT_MIN;
        int n =nums.size();
        for(auto x: nums){
            maxi=max(maxi,x);
            prefixgcd.push_back(gcd(x,maxi));
        }
        
        sort(prefixgcd.begin(), prefixgcd.end());
        for(int i =0 ;i<(n/2);i++){
            ans+=(gcd(prefixgcd[i], prefixgcd[n-i-1]));
            
        }
        return ans ;
        
    }
};