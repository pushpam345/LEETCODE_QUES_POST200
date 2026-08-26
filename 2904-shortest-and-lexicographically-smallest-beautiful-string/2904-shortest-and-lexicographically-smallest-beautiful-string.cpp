class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n =s.size();
      int right, left =0;
      int one=0;
      int minlen=INT_MAX;
      string ans="";
      for (right=0; right<n; right++){
        if(s[right]=='1')one++;
        while(one>k || s[left]=='0'){
            if(s[left]=='1')one--;
            left++;
        }
        
        if(one==k ){
            int currlen=right-left+1;
            minlen=min(minlen,right-left+1);
            if(currlen==minlen){
           if(ans==""){
            ans=s.substr(left,currlen);
           }
           else {
            if(ans.size()==currlen)
            ans=min(ans,s.substr(left,currlen));
            else ans=s.substr(left,currlen);
           }}
        }
      }
      return ans; 
    }
};