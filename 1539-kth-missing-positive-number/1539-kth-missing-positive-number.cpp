class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low =0 , high =arr.size()-1;
        int mid; int ans=INT_MAX;
        while(low<=high){
            mid = low+(high-low)/2;
            if(arr[mid]-mid-1>=k){
                ans=min(ans, mid);
                high=mid-1;


            }
            else{
                low=mid+1;
            }

        }
        if(ans==INT_MAX)return k+arr.size();
        return ans+k;
        
    }
};