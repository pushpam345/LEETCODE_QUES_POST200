class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto x:nums){
            s.insert(x);
        }
        int ans =0;
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                int currans=0;
                while(s.find(x+currans)!=s.end()){
                    currans++;
                }
                ans=max(ans,currans);
            }
        }
        return ans ;
        // return max(1,ans);
        
    }
};