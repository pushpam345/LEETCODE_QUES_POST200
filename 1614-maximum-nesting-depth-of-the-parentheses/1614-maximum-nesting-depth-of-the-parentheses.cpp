class Solution {
public:
    int maxDepth(string s) {
        int currans=0, ans=INT_MIN;
        for(auto x:s){
            if(x=='('){
                currans++;
            }
            if(x==')'){
                currans--;
            }
            ans=max(ans,currans);
        
        }
        return ans;
    }
};