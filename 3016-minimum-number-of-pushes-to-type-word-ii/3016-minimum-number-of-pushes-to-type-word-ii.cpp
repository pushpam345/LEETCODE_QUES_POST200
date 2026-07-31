class Solution {
public:
    int minimumPushes(string word) {
        vector<int>v(26,0);
        for(auto x:word){
            v[x-'a']++;
        }
        // sort(v.rbegin(), v.rend());
        priority_queue<int>pq;
        for(auto x:v){
            pq.push(x);
        }
        int ans=0;
        int i =0;
        while(!pq.empty()) {
            int x=pq.top();
            pq.pop();
            if(i<=7){
                ans+=(x);
            }
            
            else if(i>7 && i<=15){
                ans+=x*2;
            }
            else if(i>15 && i<=23){
                ans+=x*3;
            }
            else{
                ans+=x*4;
            }
            i++;


        }
        // for(int i =0 ; i< v.size(); i++){
        //     if(i<=7){
        //         ans+=(v[i]);
        //     }
            
        //     else if(i>7 && i<=15){
        //         ans+=v[i]*2;
        //     }
        //     else if(i>15 && i<=23){
        //         ans+=v[i]*3;
        //     }
        //     else{
        //         ans+=v[i]*4;
        //     }

        // }
        return ans;


        
    }
};