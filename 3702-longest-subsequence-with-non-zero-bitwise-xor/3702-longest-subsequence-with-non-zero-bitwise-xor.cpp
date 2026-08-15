class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
     bool allzero =1;long long xori=0;int n =nums.size();
     for (auto x: nums){
        if(x!=0)allzero=0;
        xori^=x;
     }
     if(allzero)return 0;
     if(xori==0)return n-1;
     return n  ;
    }
};