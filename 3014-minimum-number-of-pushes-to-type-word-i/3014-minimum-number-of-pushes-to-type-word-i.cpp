
class Solution {
public:
    int minimumPushes(string word) {
       int n =word.size();
       int ans=0;
    for(int i =0 ;i<26 ; i++){
        if(n>=i+1){
            if(i<=7){
                ans++;
            }
            else if(i>7 && i<=15){
                ans+=2;
            }
            else if(i>15 && i<=23){
                ans+=3;
            }
            else{
                ans+=4;
            }
        }
        else break;
    }
    return ans;
        
    }
};