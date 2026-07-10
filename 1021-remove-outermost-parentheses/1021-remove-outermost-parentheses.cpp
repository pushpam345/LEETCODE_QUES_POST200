class Solution {
public:
    string removeOuterParentheses(string s) {
        string t="";
        int j=0;
        for(auto x:s){
            if(x==')'){
                j=max(0,j-1);
                if(j!=0)
                t+=x;
            }
            else if(x=='('){
                if(j!=0){
                    t+=x;
                    
                }
                j++;
            }
            
        }
        return t;        
    }
};