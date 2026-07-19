class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        // sort(nums.begin(), nums.end());
        // if(k==nums.size())return nums[k-1];
        int low =*max_element(nums.begin(),nums.end());
        int high=0;
        for(auto x: nums){
            high+=(x);
        }
        int mid;
        while(low<=high){
            mid = low +(high-low)/2;
            int sum =0, cnt=1;
            
            for(int i =0 ; i<nums.size(); i++){
                if(sum+nums[i]<=mid){
                    sum+=(nums[i]);
                }
                else{
                    cnt++;
                    sum=nums[i];
                }

            }
            if(cnt>k){
                
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low ;
        
    }
};