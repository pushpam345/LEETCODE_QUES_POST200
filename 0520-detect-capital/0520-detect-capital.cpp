class Solution {
public:
    bool detectCapitalUse(string s) {
       bool allc=1,alls=1,firstc=0;
       int n =s.size();
       for(int i =0 ;i<n;i++){ 
        bool a=s[i]>=65 && s[i]<=90;
        if(i==0 && a ){
            firstc=1;continue;
        }
        if(!a ){
            allc=0;
        }
        else{
          alls=0;  
        }
       }
       if(firstc && alls)return 1;
       if(allc || alls)return 1;
       return 0;
       
    }
};