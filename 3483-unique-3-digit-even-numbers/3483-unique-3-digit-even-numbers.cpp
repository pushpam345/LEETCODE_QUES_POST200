class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>v(10,0);
        // int mult=0;
        for(auto x:digits){
            v[x]++;
            // if(v[x]==2)mult++;
        }
        int ans =0;
        for(int i = 0 ; i<10;i+=2){
            if(v[i]!=0){
            int n=0,mult=0;v[i]--;
            
            for(int j =0 ; j<10;j++){
                n+=(v[j]>0);
                if(v[j]>1)mult++;
            }
            cout<<n<<endl;
            if(v[0]==0){
                ans+=((n*(n-1)) + mult);
            }else ans += ((n-1)*(n-1)) + mult - (v[0] > 1);
            v[i]++;}
            

        }return ans;
    }
};