class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();int degree=0;
        vector<int>ans(n,0);
        for(int i =0 ; i<n ; i++){
            degree=0;
            for(int j =0 ; j<n ;j++){
                degree+=(matrix[i][j]);
            }
            ans[i]=degree;
        }
        return ans;
    }
};