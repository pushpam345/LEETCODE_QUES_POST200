class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()){
            return false;
        }
        
        vector<int>v(26,0);
        for(auto x: s){
            v[x-'a']++;
        }
        for(auto x: t){
            v[x-'a']--;
            if(v[x-'a']<0)return false;
        }
        return true ;
        
        
    }
};