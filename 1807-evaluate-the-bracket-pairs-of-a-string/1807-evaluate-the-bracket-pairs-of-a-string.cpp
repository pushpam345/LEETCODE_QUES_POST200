class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>m;int n =s.size();
        for(auto x: knowledge){
            m[x[0]]=x[1];
        }
        // cout<<m[knowledge[0][0]];
        string u ="";
        string ans=u;
        for(int i=0; i<n; ){
            if(s[i]=='('){
                
                while(s[++i]!=')'){
                    
                    u+=s[i];
                    // if(s[i]==')')break;
                }
                if(m[u]!="")
                ans+=m[u];
                else ans+='?';
                u="";

            }
            else{
                if(s[i]==')'){i++;continue;}
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};