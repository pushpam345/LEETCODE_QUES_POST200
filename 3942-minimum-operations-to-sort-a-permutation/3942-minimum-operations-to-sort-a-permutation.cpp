class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int a= *min_element(nums.begin(),nums.end());
        int b =*max_element(nums.begin(), nums.end());
        int  c=0;
        cout<<b-a<<endl;int pos_max=n-1;
        for(int i =0 ;i<n-1; i++){
             if(nums[i]==b)pos_max=i;
             if(abs(nums[i]-nums[i+1])!=1 && abs(nums[i]-nums[i+1])!=b-a){
                return -1;
             }
             else if(abs(nums[i]-nums[i+1])==b-a){
                c++;
                // if(c>1)return -1;

             }
        }
        if(nums[0]==0 && pos_max==n-1)return 0;
        return min(pos_max+1, n-pos_max +1);
        bool asce=1;

        
        
        // return 1;
    }
};
/*
0 1 2 3 
1 2 3 0 - 0 3 2 1 

1 0 2
*/