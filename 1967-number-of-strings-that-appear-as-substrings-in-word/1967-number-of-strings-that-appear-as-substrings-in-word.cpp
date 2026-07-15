class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n =patterns.size();
        int ans=0;
        for(auto x: patterns){
            if(word.find(x)!=string::npos)ans++;
        }
        return ans ;
        
    }
};