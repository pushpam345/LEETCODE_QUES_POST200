class Solution {
public:
    string largestOddNumber(string num) {
        string ans,local="";int a;

        for(auto x: num){
            a=x-'0';
            local+=x;
            if(a%2==1){
                ans=local;

            }
            
        }
        return ans;
        
    }
};