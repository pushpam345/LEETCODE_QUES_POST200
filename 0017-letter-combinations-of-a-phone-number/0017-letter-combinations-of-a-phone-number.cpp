vector<string> v = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        vector<string> ans;
        vector<string> y;

        for (auto x : digits) {
            y.push_back(v[x - '2']);
        }
        string c = "";
        for (int i = 0; i < y[0].size(); i++) {
            for (int j = 0; j < (y.size() > 1 ? y[1].size() : 1); j++) {
                for (int k = 0; k < (y.size() > 2 ? y[2].size() : 1); k++) {
                    for (int l = 0; l < (y.size() > 3 ? y[3].size() : 1); l++) {

                        string c = "";
                        c += y[0][i];
                        if (y.size() > 1)
                            c += y[1][j];
                        if (y.size() > 2)
                            c += y[2][k];
                        if (y.size() > 3)
                            c += y[3][l];

                        ans.push_back(c);
                    }
                }
            }
        }
        return ans;
    }
};