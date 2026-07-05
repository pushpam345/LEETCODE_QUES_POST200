class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
     int low =1, high =*max_element(nums.begin(), nums.end());
     int mid ;
     int ans =INT_MAX;int localans=0;
     while(low<=high){
        mid =low+ (high-low)/2;
        localans=0;
        for (int i =0; i<nums.size(); i++){
            localans+=((nums[i]+mid-1)/mid);
        }
        if(localans<=threshold){
            ans=min(ans,mid);
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
     return ans;  
    }
};