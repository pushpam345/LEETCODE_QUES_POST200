class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        string ans = "";
        int min_len = INT_MAX;
        for (int i = 0; i < n; i++) {
            min_len = min(min_len, (int)strs[i].size());
        }
        for (int i = 0; i < min_len; i++) {
            char x = strs[0][i];

            for (int j = 0; j < n; j++) {
                if (strs[j][i] != x) {
                    return ans;
                }
            }
            ans += x;
        }
        return ans;
    }
};