class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> v(110,0);
        for(auto x: nums){
           if(x%k==0){
            v[x/k]=1;
           }
        }
        for(int i =1 ; i<=101;i++){
            if(v[i]==0)return i*k;
        }
        return k;
    }
};