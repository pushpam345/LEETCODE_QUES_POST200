class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n =nums.size();
        vector<int> v(n+1,1);
        for(auto x: nums){
            v[x]=0;
        }
        vector<int>ans;
        for(int i =1; i<=n;i++){
            if(v[i]==1)ans.push_back(i);
        }
        return ans ;
    }
};