class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int a=* min_element(nums1.begin(), nums1.end());
        bool all=1;
        for(auto x:nums1){
            if(x%2==1){
                all=0;break;
            }
        }
        if(all)return 1;
        return a%2==1;
    }
};