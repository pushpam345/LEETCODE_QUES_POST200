class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n =nums.size();
        if(n<=2){
            return n;
        }
        int ans=0;
        int lstpower=0;
        for(int i =0 ; i<17; i++){
            ans=(1<<i);
            if(ans<=n){
                lstpower=max(lstpower,ans);
            }
        }
        return lstpower*2;
    }
};