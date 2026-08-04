class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int> v(100,0);
       int maxi=INT_MIN,mini=INT_MAX;
       for(auto x:nums){
        v[x-1]=1;
        maxi=max(maxi,x);
        mini=min(mini,x);
       }
       vector<int>ans;
       for(int i =mini+1; i<maxi; i++){
        if(v[i-1]==0)ans.push_back(i);
       }
       return ans;

    }
};