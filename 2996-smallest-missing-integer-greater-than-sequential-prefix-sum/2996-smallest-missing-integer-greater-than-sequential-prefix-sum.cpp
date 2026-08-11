class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        m[nums[0]]++;
        int currlen=1, maxlen=1,sum=nums[0], ans=nums[0];
        for(auto x:nums){
            m[x]++;
        }
        for(int i =1; i<n ; i++){
            
           if(nums[i]==nums[i-1]+1){
            currlen++;
            
            sum+=nums[i];
            if(currlen==maxlen){
                ans=min(ans,sum);
            }
            if(currlen>maxlen){
               ans=sum;
            }
            maxlen=max(maxlen,currlen);
            
           }
           else{
            break;
           }
        }
        while(m[ans]){
            ans++;
        }
        return ans;
    }
};