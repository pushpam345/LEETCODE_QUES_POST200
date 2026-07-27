class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_num1 = INT_MIN;
        int max_num2 = INT_MIN;
        for (auto x : nums) {
            if (x >= max_num1) {
                max_num2 = max_num1;
                max_num1 = x;
            }
            else if (x >= max_num2) {
                max_num2 = x;
            }
        }
        return (max_num1-1)*(max_num2-1);
    }
};