class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return n;
        unordered_set<int> s1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                s1.insert(nums[i] ^ nums[j]);
            }
        }
        unordered_set<int> s;
        for (auto y : s1) {
            // if(!y)continue;
            for (auto x : nums) {
                s.insert(y ^ x);
            }
        }
        return s.size();
    }
};