class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        
        vector<int>temp(n, INT_MAX);

        int left=0,sum=0;int ans=INT_MAX;
        int kaddu=INT_MAX;

        for (int right = 0; right < n; right++) {
            sum += arr[right];
            while (sum > target) {
                sum -= arr[left];left++;
            }
            if (sum==target) {
                int cur_len = right - left + 1;
                if (left > 0 && temp[left-1] != INT_MAX) {
                    ans = min(ans, cur_len + temp[left-1]);
                }

                kaddu = min(kaddu, cur_len);
            }

            temp[right]=kaddu;
        }

        return ans==INT_MAX?-1:ans;
    }
};