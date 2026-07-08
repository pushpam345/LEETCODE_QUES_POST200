class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        ;
        if(m > arr.size()/k){
            return -1 ;
        }
        int low = *min_element(arr.begin(), arr.end());
        int high = *max_element(arr.begin(), arr.end());
        int mid ; int ans=INT_MAX, localans;
        while(low<=high){
            mid = low + (high-low)/2;
            localans=0;int streak=0;
            for (int i=0 ; i<arr.size(); i++){
                if(arr[i]<=mid){
                    streak++;
                    if(streak==k){
                        localans++;
                        streak=0;
                    }
                }
                else{
                    streak=0;
                }
                
            }
            if(localans>=m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans ;
        
        
    }
};