class Solution {
public:
    int p =1e6+7;int M=1e9+7;
    // rolling hash --> basically map subarray with integer value 
    unordered_map<long long,long long > f(vector<int>& nums, int k ){
        // in rolling_hash we represent our hash value for subarray as nums[0]*p^k-1+...... nums[k-1]*p^0;
        long long  highest_power=1;// calculating p^k-1 cuzz that is the mac power in our polynomial 
        int n = nums.size();
        unordered_map<long long,long long>m;
        //calculate that highest pow
        for(int i =1 ; i<k ;i++){
            
            highest_power=(p*highest_power)%M;
            
        }
        // current hash yani phli subarray ko map krlo 
        long long  currhash=0;
        for(int i =0 ; i<k;i++){
            currhash=((currhash*p)%M + nums[i])%M;
            
        }
        // mapped now 
        m[currhash]++;
        for(int i =1; i<=n-k ; i++){
            /*
            ab ham window slide krenge , basically it has 3 steps 
               1)polynomial ka phla wala term nikaldoo 
               2)the multiply the remaining polynomial with P
               3) add the new term -> nums[i+k-1]
            */
            long long currmaxpow=(nums[i-1]*highest_power)%M;
            currhash=(currhash-currmaxpow+M)%M;
            currhash=((currhash*p)%M + nums[i+k-1])%M;
            m[currhash]++;
        } 
        return m ;
    }
    int smallestUniqueSubarray(vector<int>& nums) {
        int low =1, high =nums.size()-1;
        int ans =nums.size();
        //binary search 
        while(low<=high){
            int mid =low + (high-low)/2;
            unordered_map<long long , long long> m=f(nums,mid);
            for(auto &x :m){
                if(x.second==1){
                    ans=mid;break;
                }
            }
            /* agar koi possible array mili to usse badi array dekhne ka koi mtlb nhi h choti dekho aur agar na mile to usse choti to nhi hi exist kr skti mtlb agar current ka duplicate h to usse subaarya ka duplicate bhi to hoga hi hoga 
            */ 
            if(ans==mid){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans ;
    }
};