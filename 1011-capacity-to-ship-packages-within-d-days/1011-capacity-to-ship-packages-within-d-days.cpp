class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for (auto x : weights) {
            sum += (x);
        }
        int low = *max_element(weights.begin(), weights.end()), high = sum;
        int mid;
        int ans = INT_MAX;

        while (low <= high) {
            mid = low + (high - low) / 2;
            int localans = 1;
            sum = 0;

            for (auto x : weights) {
                if (sum + x > mid) {
                    localans++;
                    sum = x; 
                } else {
                    sum += x;
                }
            }

            if (localans <= days) {
                ans = min(ans, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};