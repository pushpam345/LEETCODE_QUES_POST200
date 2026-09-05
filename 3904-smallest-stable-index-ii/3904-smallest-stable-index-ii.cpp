class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int> maxi(n,-1);
        vector<int>mini(n,INT_MAX);
        int a=-1,b=INT_MAX;
        for(int i =0 ; i< nums.size(); i++){
            a=max(a,nums[i]);
            maxi[i]=a;
        }
        for(int i =nums.size()-1 ; i>=0; i--){
            b=min(b,nums[i]);
            mini[i]=b;
        }
        
        for(int i =0 ; i<n ; i++){
            if(maxi[i]-mini[i]<=k)return i;
        }
        return -1;

    }
};