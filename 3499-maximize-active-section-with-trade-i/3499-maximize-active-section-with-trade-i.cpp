class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int onelen = 0;
        int n = s.size();
        for (auto x : s) {
            if (x == '1') {
                onelen++;
            }
        }
        int lz = 0, rz = 0;
        int ans = 0;
        int one = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                lz++;
            } else {
                one = 1;
                break;
            }
        }
        if (!one)
            return 0;
        for (int i = lz; i < s.size(); i++) {
            if (one) {
                if (s[i] == '1') {
                    one++;
                    continue;
                }

                // rz = 1;
                rz = 1;
                one = 0;

            } else {
                if (s[i] == '1') {
                    one = 1;
                    if (lz && rz) {
                        ans = max(ans, lz + rz);
                    }
                    lz = rz;
                    rz = 0;
                } else {
                    rz++;
                }
            }
        }
        if (lz && rz) {
            ans = max(ans, lz + rz);
            lz = rz;
            rz = 0;
        }
        cout << lz << " " << rz << " " << ans << " " << onelen;
        return ans + onelen;
    }
};