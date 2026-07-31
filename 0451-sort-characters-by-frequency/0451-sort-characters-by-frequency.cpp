class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char, int>m;
        for(auto x:s){
            m[x]++;
        }
        vector<pair<char,int>>v(m.begin(), m.end());
        sort(v.begin(), v.end(),[](auto const a, auto const b){
            return a.second>b.second;
        });
        string c="";
        for(auto x:v){
            for(int i =0 ; i<x.second; i++){
                c+=x.first;
            }  
        }
        
        return c;
    }
};