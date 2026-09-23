class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();int ans =INT_MAX;
        int left =0 , j = n-k, sum=accumulate(arr.begin(),arr.end(),0), score=0;
        if(k==n)return sum;
        for(int right =0 ; right<n; right++){
            score+=arr[right];
            while(right-left+1>j){
                score-=arr[left++];
            }
            if(right-left+1==j){
                ans=min(ans,score);
            }
        }
        return sum-ans ;
    }
};