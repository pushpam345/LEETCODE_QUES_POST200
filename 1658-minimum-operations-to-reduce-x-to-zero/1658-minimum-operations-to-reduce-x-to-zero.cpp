class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
    
        // vector<int>pref(n,0);
        // vector<int>suff(n,0);
        // for(int i =0 ; i<n ;i++){
        //     if(i==0){
        //         pref[i]=nums[i];
        //         suff[n-i-1]=nums[n-1-i];
        //     }
        //     else{
        //         pref[i]=pref[i-1]+nums[i];
        //         suff[n-i-1]=suff[n-i]+nums[n-i-1];
        //     }
        // }
        // int ans =INT_MAX;int score1=0,score2=0;
        // for(int i =0 ; i<n ; i++){
        //     if(pref[i]<=x){
        //         score1=pref[i];
        //         if(score1==x){
        //             ans=min(ans,i);
        //         }
        //     }
        //     if(suff[n-i-1]<=x){
        //         score2=suff[n-i-1];
        //         if(score2==x){
        //             ans=min(ans,i);
        //         }
        //     }
            
        // }
        // int score3=0,j=0;
        // for(int i =0 ; i<n ; i++){
        //     if(pref[i]+suff[n-i-1]<x){
        //         score3=pref[i]+suff[n-i-1];
        //         j=i;
        //     }
        //     else break;
        // }
        // if(score3+)
        int n =nums.size();
        int left=0;
        int sum=accumulate(nums.begin(), nums.end(),0);
        if(x>sum)return -1;
        int ans =-1, score=0;
        for(int right =0 ; right <n ; right++){
             score+=nums[right];
             while(score>(sum-x)){
                score-=nums[left++];
             } 
             if(score==(sum-x)){
                ans=max(ans,right-left+1);
             } 
        }
        if(ans==-1)return ans;
        return n-ans;
    }
};