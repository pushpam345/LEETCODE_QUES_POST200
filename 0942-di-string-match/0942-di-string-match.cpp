class Solution {
public:
    vector<int> diStringMatch(string s) {
        int a=0,b=s.size();
        vector<int>ans;
        for(auto x:s){
            ans.push_back(x=='I'? a++ :b--);
        }
        ans.push_back(max(a,b));return ans;
    }
};