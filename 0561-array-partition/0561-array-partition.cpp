class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans =0;bool a=1;
        for(auto x:nums){
            if(a){
                ans+=x;
                a=0;
            }
            else{a=1;}
            

        }
        return ans ;
    }
};